#include <stdio.h>
#include <math.h>
#define f(x, y) x*sqrt(y)

int main(void) {
	double a, b, c, d, x, x1, y, y1, dx, dy, s, sy1, sy2, s1, s2, sx;
	int n, m;

	printf("xの下限を入力して下さい。 a = ");
	scanf("%lf", &a);
	printf("xの上限を入力して下さい。 b = ");
	scanf("%lf", &b);

	printf("yの下限を入力して下さい。 c = ");
	scanf("%lf", &c);
	printf("yの上限を入力して下さい。 d = ");
	scanf("%lf", &d);

	printf("xの分割数を入力して下さい。 n = ");
	scanf("%d", &n);
	printf("yの分割数を入力して下さい。 m = ");
	scanf("%d", &m);

	dx = (b-a)/n;
	dy = (d-c)/m;
	s = 0;

	for (int i=0; i<n; i++) {
		x = a + i*dx;
		x1 = x + dx;
		sy1 = 0;
		sy2 = 0;

		for (int j=0; j<m; j++) {
			y = c + j*dy;
			y1 = y + dy;

			s1 = ( f(x, y) + f(x, y1) )/2*dy;
			s2 = ( f(x1, y) + f(x1, y1) )/2*dy;
			sy1 += s1;
			sy2 += s2;
		}

		sx = (sy1 + sy2)/2*dx;
		s += sx;
	}

	printf("s = %f \n", s);

	return 0;
}