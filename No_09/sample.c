#include <stdio.h>
#include <math.h>
#define f(x) exp(2*x)

int main(void) {
	double a, b, x, x1, x2, dx, i, s, s1, n;

	printf("下限を入力して下さい。 a = ");
	scanf("%lf", &a);
	printf("上限を入力して下さい。 b = ");
	scanf("%lf", &b);
	printf("分割数を入力して下さい。 n = ");
	scanf("%lf", &n);

	dx = (b-a)/(2*n);
	s = 0;

	for (i=0; i<n; i++) {
		x = a + 2*i*dx;
		x1 = x + dx;
		x2 = x + 2*dx;
		s1 = ( ( f(x) + 4*f(x1) + f(x2) )/3 )*dx;
		s += s1;
	}

	printf("n = %f s = %f\n", n, s);

	return 0;
}