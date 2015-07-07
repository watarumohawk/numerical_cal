#include <stdio.h>
#include <math.h>
#define g 9.80665

int main(void) {

    double y1, y2, v1, v2, v0, t, dt, x, y, rad, deg, k1, k2, k3, k4, k, h1, h2, h3, h4, h;

    printf("初速度 [m/s] v0 = ");
    scanf("%lf", &v0);

    printf("角度（°） deg = ");
    scanf("%lf", &deg);

    rad = deg*(M_PI/180.);

    y1 = 0;
    v1 = v0*sin(rad);
    dt = 0.01;

    FILE * data;
    data = fopen("problem_data.csv", "w");

    for (int i=0; i<200; ++i) {
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
        y2 = y1 + k;

        h = (h1 + 2*h2 + 2*h3 + h4)/6.;
        v2 = v1 + h;

        x = v0*cos(rad)*t;
        y = v0*sin(rad)*t - (1./2.)*g*t*t;

        fprintf(data,"%f, %f\n", x, y1);
        printf("t = %f, 数値計算 -> x = %f, y = %f, 理論値 -> x = %f, y = %f\n", t, x, y1, x, y);

        y1 = y2;
        v1 = v2;
    }
    return 0;
}
