#include <stdio.h>
#include <math.h>

int main(void) {
	double f, f1, f2, dx, x;

	f1 = 2;
	dx = 0.01;

	for (int i=0; i<101; ++i) {
		x = i*dx;

        f2 = f1 - 3*x*dx*pow(f1, 2);

        f = 2./(3*pow(x, 2)+1);

        printf("x = %f 数値解 -> f1 = %f 正確な値 -> f = %f \n", x, f1, f);

        f1 = f2;
	}
}
