#include <stdio.h>
#include <math.h>
#define g 9.80665

int main(void) {

	double x0, x1, x2, v1, v2, v0, t, dt, x, k1, k2, k3, k4, k, h1, h2, h3, h4, h;

	x0 = 5;
	v0 = 15;

	x1 = x0;
	v1 = v0;
	dt = 0.01;

	for (int i=0; i<=100; ++i) {
        t = i*dt;

        k1 = dt*v1;
        h1 = dt*(-g);

        k2 = dt*(v1 + h1/2.);
        h2 = dt*(-g);

        k3 = dt*(v1 + h2/2.);
        h3 = dt*(-g);

        k4 = dt*(v1 + h3/2.);
        h4 = dt*(-g);

        k = (k1+ 2*k2 + 2*k3 + k4)/6.;
        x2 = x1 + k;

        h = (h1 + 2*h2 + 2*h3 +h4)/6.;
        v2 = v1 + h;

        x = x0 + v0*t - g*t*t/2.;

        printf("t = %f, 数値計算 -> x = %f, 理論値 -> x = %f\n", t, x1, x);

        x1 = x2;
        v1 = v2;
    }
    return 0;
}