#include <stdio.h>
#include <math.h>

int main(void) {

	double f, f1, f2, g1, g2, dx, x;

	f1 = 2;
	g1 = 0;
	dx = 0.01;

	for (int i=0; i<=100; i++) {
		x = i*dx;
		f2 = f1 + dx*g1;
		g2 = g1 - dx*f1;

		f = 2*cos(x);

		printf("x = %f, 計算値-> f1 = %f, 正確な値-> f = %f \n", x, f1, f);

		f1 = f2;
		g1 = g2;
	}
	return 0;
}



