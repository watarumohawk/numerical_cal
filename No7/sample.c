#include <stdio.h>
#include <math.h>
#define f(x) x*exp(-3*x)


int main() {
	double x, x1, x2, dx, f1, f2, fa, fb, er1, er2;

	printf("xを入力して下さい。x= ");
	scanf("%lf", &x);

	printf("Δxを入力して下さい。Δx= ");
	scanf("%lf", &dx);

	x1 = x - dx;
	x2 = x + dx;

	f1 = ( f(x2) - f(x1))/(2*dx);
	f2 = ( f(x2) - 2*f(1)+f(x1) )/(dx*dx);
	fa = (1-3*x)*exp(-3*x);
	fb = (9-6*x)*exp(-3*x);
	er1 = 100*( (f1 - fa)/fa );
	er2 = 100*( (f2 - fb)/fb );

	printf("1階微分 f1 = %f\n", f1);
	printf("誤差 %f\n", er1);
	printf("2階微分 f2 = %f\n", f2);
	printf("誤差 %f\n", er2);
}