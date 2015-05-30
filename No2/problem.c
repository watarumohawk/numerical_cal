#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define g 9.80665

int main(void) {

	double DetermineX(double v0, double rad, double t);
	double DetermineY(double v0, double rad, double t);
	double DetermineMag(double v0, double rad);

	double x, y, v0, deg, rad, t, magnitude;

	printf("初速度v0 (m/s)、角度θ（°）、時間tを入力して下さい。\n");
	printf("v0 = ");
	scanf("%lf", &v0);

	printf("deg = ");
	scanf("%lf", &deg);
	rad = deg*(M_PI/180);

	printf("t = ");
	scanf("%lf", &t);

	x = DetermineX(v0, rad, t);
	y = DetermineY(v0, rad, t);
	magnitude = DetermineMag(v0, rad);

	printf("x=%f y=%f\n", x, y);
	printf("magnitude=%f \n", magnitude);

	return 0;
}

double DetermineX(double v0, double rad, double t) {
	double x;

	x = v0*cos(rad)*t;

	return x;
}

double DetermineY(double v0, double rad, double t) {
	double y;

	y = v0*sin(rad)*t - (1/2)*g*t*t;

	return y;
}

double DetermineMag(double v0, double rad) {
	double magnitude, v;

	v = sqrt( v0*v0*( sin(rad)*sin(rad) + cos(rad)*cos(rad) ) );
	magnitude = abs(v);

	return magnitude;
}