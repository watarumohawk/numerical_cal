#include <stdio.h>
#include <math.h>
#define pai 3.14159265

int main(void) {

	double a, b, c, d, e;
	a = pai/3.0;
	b = exp(a);
	c = sin(a);
	d = cos(a);
	e = log(a);

	printf("a=%f b=%f c=%10.8f d=%.5f e= %e \n", a, b, c, d, e);

	return 0;
}