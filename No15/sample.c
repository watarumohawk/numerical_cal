#include <stdio.h>
#include <math.h>

int main(void) {

	FILE * data;

	double f, f1, f2, g1, g2, dx, x, k1, k2, k3, k4, k, h1, h2, h3, h4, h;
	int a = 2;

	data = fopen("sample_data.csv", "w");

	f1 = 0;
	g1 = a;
	dx = 0.01;

	for (int i=0; i<=500; i++) {

		x = i*dx;

		k1 = dx*g1;
		h1 = dx*(-a*f1);

		k2 = dx*(g1 + h1/2.);
		h2 = dx*( -a*(f1 + k1/2.) );

		k3 = dx*(g1 + h2/2.);
		h3 = dx*( -a*(f1 + k2/2.) );

		k4 = dx*(g1 + h3/2.);
		h4 = dx*(-a*(f1 + k3) );

		k = (k1 + 2*k2 + 2*k3 + k4)/6.;
		f2 = f1 + k;

		h = (h1 + 2*h2 + 2*h3 + h4)/6.;
		g2 = g1 + h;

		f = sqrt(a)*sin( sqrt(a)*x );

		printf("x = %f, 数値解-> f1 = %f, 正確な値-> f = %f \n", x, f1, f);
		fprintf(data,"%f, %f\n", x, f1);

		f1 = f2;
		g1 = g2;
	}

	fclose(data);

	return 0;
}