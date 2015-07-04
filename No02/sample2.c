#include <stdio.h>
#include <math.h>

int main(void) {

	double f1(double x), f2(double x);
	double x, y, z;

	printf("xを入力して下さい。 x = ");
	scanf("%lf", &x);

	y = f1(x);
	z = f2(x);

	printf("x=%f y=%f z=%f \n", x, y, z);

	return 0;
}

double f1(double x) {
	double y, z;
	y = x*x*x*exp(-2*x)-1;
	return(y);
}

double f2(double x) {
	double a, b, z;
	a = sqrt(x);
	b = a*a*a+1;
	z = a*exp(b)+sin(b);
	return(z);
}