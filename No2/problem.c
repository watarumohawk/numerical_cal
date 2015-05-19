#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define g 9.8

int main(void) {

	double DetermineX(double v0, double deg, double t);
	double DetermineY(double v0, double deg, double t);
	double DetermineMag(double v0, double deg);

	double x, y, v0, deg, t, magnitude;

	printf("初速度v0 (m/s)、角度θ（°）、時間tを入力して下さい。\n");
	printf("v0 = ");
	scanf("%lf", &v0);

	printf("deg = ");
	scanf("%lf", &deg);

	printf("t = ");
	scanf("%lf", &t);

	x = DetermineX(v0, deg, t);
	y = DetermineY(v0, deg, t);
	magnitude = DetermineMag(v0, deg);

	printf("x=%f y=%f\n", x, y);
	printf("magnitude=%f \n", magnitude);

	return 0;
}

double DetermineX(double v0, double deg, double t) {
	double x;

	x = v0*cos(deg)*t;

	return x;
}

double DetermineY(double v0, double deg, double t) {
	double y;

	y = v0*sin(deg)*t - (1/2)*g*t*t;

	return y;
}

double DetermineMag(double v0, double deg) {
	double magnitude, v;

	v = sqrt( v0*v0*( sin(deg)*sin(deg) + cos(deg)*cos(deg) ) );
	magnitude = abs(v);

	return magnitude;
}