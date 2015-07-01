#include <stdio.h>
#include <math.h>

int main(void) {

	FILE * data;

	double f, f1, f2, g1, g2, dx, x, k1, k2, k3, k4, k, h1, h2, h3, h4, h;
	int a, b;

	data = fopen("problem_data.csv", "w");

	printf("aを入力して下さい。 a = ");
	scanf("%d", &a);
	printf("bを入力して下さい。 b = ");
	scanf("%d", &b);
	printf("yを入力して下さい。 y = ");
	scanf("%lf", &f1);
	printf("dy/dxを入力して下さい。 dy/dx = ");
	scanf("%lf", &g1);
	printf("dxを入力して下さい。 dx = ");
	scanf("%lf", &dx);

	for (int i=0; i<=500; i++) {

		x = i*dx;

		k1 = dx*g1;
		h1 = dx*( (-b)*g1 - a*f1);

		k2 = dx*(g1 + h1/2.);
		h2 = dx*( (-b)*(g1 + h1/2.) - a*(f1 + k1/2.) );

		k3 = dx*(g1 + h2/2.);
		h3 = dx*( (-b)*(g1 + h2/2.) - a*(f1 + k2/2.) );

		k4 = dx*(g1 + h3);
		h4 = dx*( (-b)*(g1 + h3) - a*(f1 + k3) );

		k = (k1 + 2*k2 + 2*k3 + k4)/6.;
		f2 = f1 + k;

		h = (h1 + 2*h2 + 2*h3 + h4)/6.;
		g2 = g1 + h;

		f = 5*exp(3*x)*(1 - 3*x);

		printf("x = %f, 数値解-> f1 = %f, dy/dx = %f, 正確な値-> f = %f \n", x, f1, g1, f);
		fprintf(data,"%f, %f, %f\n", x, f1, g1);

		f1 = f2;
		g1 = g2;
	}

	fclose(data);

	return 0;
}