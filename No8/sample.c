#include <stdio.h>
#include <math.h>
#define f(x) exp(2*x)

int main(void) {
	double a, b, x, x1, dx, s, s1;
	int n;

	printf("下限を入力して下さい。 a = ");
	scanf("%lf", &a);
	printf("上限を入力して下さい。 b = ");
	scanf("%lf", &b);
	printf("分割数を入力して下さい。 n = ");
	scanf("%d", &n);

	dx = (b-a)/n;
	s = 0;

	for (int i=0; i<n; i++) {
		x = a + i*dx;
		x1 = x + dx;
		s1 = ( ( f(x) + f(x1) )/2 )*dx;
		s = s + s1;
	}

	printf("n = %d s = %f\n", n, s);

	return 0;
}