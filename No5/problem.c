#include <stdio.h>
#include <math.h>
#define g 9.80665

int main() {

	double DetermineX(double v0, double rad, int i);
	double DetermineY(double v0, double rad, int i);

	double x, y, v0, deg, rad;
	int t, i;

	printf("初速度v0 (m/s)、角度θ（°）、経過時間t（s）を入力して下さい。\n");
	printf("v0 = ");
	scanf("%lf", &v0);

	printf("deg = ");
	scanf("%lf", &deg);
	rad = deg*(M_PI/180.);

	printf("t = ");
	scanf("%d", &t);


	FILE *data;

	data = fopen("problem_data.csv", "w");

	for (i=0; i<=t; i++) {
		x = DetermineX(v0, rad, i);
		y = DetermineY(v0, rad, i);

		fprintf(data,"%f, %f\n", x, y);
	}

	fclose(data);

	return 0;
}

double DetermineX(double v0, double rad, int i) {
	double x;

	x = v0*cos(rad)*i;

	return x;
}

double DetermineY(double v0, double rad, int i) {
	double y;

	y = v0*sin(rad)*i - (1./2.)*g*i*i;

	return y;
}