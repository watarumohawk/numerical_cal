#include <stdio.h>
#include <math.h>

int main() {
	double n, i, a, b, c, d, e;

	printf("a b c d e\n");
	printf("\n");

	for (i=1; i<=10; i++) {
		n = i;
		a = n;
		b = n*n;
		c = pow(n, n);
		d = sqrt(n);
		e = exp(n);
	}

	printf("%3.1f %5.2f %e %f %f\n",a, b, c, d, e);

	return 0;
}