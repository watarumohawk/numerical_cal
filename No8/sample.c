#include <stdio.h>
#include <math.h>
#define f(x) exp(2*x)

int main(void) {
	double a, b, x, x1, dx, i, s, s1, n;

	printf("下限を入力して下さい。 a = ");
	scanf("%lf", &a);
	printf("上限を入力して下さい。 b = ");
	scanf("%lf", &b);
	printf("分割数を入力して下さい。 n = ");
	scanf("%lf", &n);

	dx = (b-a)/n;
	s = 0;

	for (i=0; i<n; i++) {
		x = a + i*dx;
		x1 = x + dx;
		s1 = ( f(x) + f(x1) )/2*x;
		s = s + s1;
	}

	printf("n = %f s = %f\n", n, s);

	return 0;
}