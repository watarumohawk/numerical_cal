#include <stdio.h>
#include <math.h>

int main(void) {

	double f, f1, f2, g1, g2, dx, x, k1, k2, k3, k4, k, h1, h2, h3, h4, h;

	f1 = 0;
	g1 = 1;
	dx = 0.01;

	for (int i=0; i<=100; i++) {
		x = i*dx;

		k1 = dx*g1;
		h1 = dx*(6*g1 - 9*f1);

		k2 = dx*(g1 + h1/2.);
		h2 = dx*( 6*(g1 + h1/2.) - 9*(f1 + k1/2.) );

		k3 = dx*(g1 + h2/2.);
		h3 = dx*( 6*(g1 + h2/2.) - 9*(f1 + k2/2.) );

		k4 = dx*(g1 + h3);
		h4 = dx*( 6*(g1 + h3) - 9*(f1 + k3) );

		k = (k1 + 2*k2 + 2*k3 + k4)/6.;
		f2 = f1 + k;

		h = (h1 + 2*h2 + 2*h3 + h4)/6.;
		g2 = g1 + h;

		f = x*exp(3*x);

		printf("x = %f, 計算値-> f1 = %f, 正確な値-> f = %f \n", x, f1, f);

		f1 = f2;
		g1 = g2;
	}
	return 0;
}