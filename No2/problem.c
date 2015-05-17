#include <stdio.h>
#include <math.h>
#define g 9.8

int main(void) {

	// double f1(double v0, deg, t), f2(double x);
	double f1(double v0, deg, t);
	double x, y, position, v0, deg, t;

	printf("初速度v0 (m/s)、角度θ（°）、時間tを入力して下さい。 v0 = , deg = , t = ");
	scanf("%lf %lf %lf", &v0, &deg, &t);

	position = f1(v0, deg, t);
	// magnitude = f2(v0, deg, t);

	// printf("x=%f y=%f z=%f \n", x, y, v0);
	printf("position=%f y=%f z=%f \n", position, y, v0);

	return 0;
}

double f1(double v0, deg, t) {
	double x, y;

	x = v0*sin(deg)*t;
	y = v0*sin(deg)*t - (1/2)*g*t*t;

	return(x, y);
}

double f2(double v0, deg, t) {
	double magnitude, Vx, Vy;

	magnitude =

	return(magnitude);
}




