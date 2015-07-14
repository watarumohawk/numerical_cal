#include <stdio.h>
#include <math.h>

int main(void) {

	FILE *data;

	double x1, x2, y1, y2, vx1, vx2, vy1, vy2, t, dt, x, y, kx1, kx2, kx3, kx4, kx;
	double ky1, ky2, ky3, ky4, ky, hx1, hx2, hx3, hx4, hx, hy1, hy2, hy3, hy4, hy, x0, y0;

	data = fopen("data-problem.csv", "w");

	x1 = 0;
	y1 = 0;
	vx1 = 0;
	vy1 = 1;
	dt = 0.01;

	for (int i=0; i<=1000; i++) {
        t = i*dt;

        kx1 = dt*vx1;
        ky1 = dt*vy1;
        hx1 = -dt*vy1;
        hy1 = dt*vx1;

        kx2 = dt*(vx1 + hx1/2.);
        ky2 = dt*(vy1 + hy1/2.);
        hx2 = dt*( -(vy1 + hy1/2.) );
        hy2 = dt*(vx1 + hx1/2.);

        kx3 = dt*(vx1 + hx2/2.);
        ky3 = dt*(vy1 + hy2/2.);
        hx3 = dt*(-(vy1 + hy2/2.) );
        hy3 = dt*(vx1 + hx2/2.);

        kx4 = dt*(vx1 + hx3);
        ky4 = dt*(vy1 + hy3);
        hx4 = dt*( -(vy1 + hy3) );
        hy4 = dt*(vx1 + hx3);

        kx = (kx1 + 2*kx2 + 2*kx3 + kx4)/6.;
        ky = (ky1 + 2*ky2 + 2*ky3 + ky4)/6.;
        x2 = x1 + kx;
        y2 = y1 + ky;

        hx = (hx1 + 2*hx2 + 2*hx3 + hx4)/6.;
        hy = (hy1 + 2*hy2 + 2*hy3 + hy4)/6.;
        vx2 = vx1 + hx;
        vy2 = vy1 + hy;

        x0 = sin(t) - 1;
        y0 = cos(t);

        if (fmod(i, 10)<0.01) {
            printf("t = %5.1f, 計算値 -> x=%f, y=%f, 理論値 -> x0=%f, y0=%f\n", t, x1, y1, x0, y0);
            fprintf(data,"%f, %f, %f, %f\n", x1, y1, x0, y0);
        }

        x1 = x2;
        y1 = y2;
        vx1 = vx2;
        vy1 = vy2;

    }
    fclose(data);

    return 0;
}