#include <stdio.h>
#include <math.h>

int main(void) {

	double f, f1, f2, dx, x, k1, k2, k3, k4, k;

	f1 = 2;
	dx = 0.01;

	for (int i=0; i<=100; i++) {
		x = i*dx;
		k1 = dx*(-3)*x*f1*f1;
		k2 = dx*(-3)*(x + dx/2.)*pow( (f1 + k1/2.), 2);
		k3 = dx*(-3)*(x + dx/2.)*pow( (f1 + k2/2.), 2);
		k4 = dx*(-3)*(x + dx)*pow( (f1 + k3), 2);
		k = (k1 + 2*k2 + 2*k3 + k4)/6.;

		f2 = f1 + k;

        f = 2./(3*pow(x, 2)+1);

		printf("x = %f, 計算値-> f1 = %f, 正確な値-> f = %f \n", x, f1, f);

		f1 = f2;
	}
	return 0;
}



