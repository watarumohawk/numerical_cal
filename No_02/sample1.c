#include <stdio.h>
#include <math.h>
#define f(x) x*x*x*exp(-2*x)-1

int main(void) {

	double x, y;

	printf("xを入力して下さい。 x = ");
	scanf("%lf", &x);

	y = f(x);

	printf("x=%f y=%f \n", x, y);

	return 0;
}