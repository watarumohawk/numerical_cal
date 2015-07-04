#include <stdio.h>
#include <math.h>
#define f(x) cos(x)*cos(x)

int main(void) {
	double a, b, x, x1, dx, s, s1, deg;
	int i, n;

	printf("角度（°）を入力して下さい。 deg = ");
	scanf("%lf", &deg);
	printf("分割数を入力して下さい。 n = ");
	scanf("%d", &n);

	s = 0;
	a = 0;
	b = deg*(M_PI/180.);

	dx = (b-a)/n;

	for (i=0; i<n; i++) {
		x = a + i*dx;
		x1 = x + dx;
		s1 = ( ( f(x) + f(x1) )/2 )*dx;
		s += s1;
	}

	printf("n = %d s = %f\n", n, s);

	return 0;
}