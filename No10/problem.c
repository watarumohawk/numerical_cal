#include <stdio.h>
#include <math.h>
#define f(x, y) x*sqrt(y)

int main(void) {
	double a, b, c, d, x, x1, x2, y, y1, y2, dx, dy, s, sy1, sy2, sy3, s1, s2, s3, sx;
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

	dx = (b-a)/(2*n);
	dy = (d-c)/(2*m);
	s = 0;

	for (int i=0; i<n; i++) {
		x = a + 2*i*dx;
		x1 = x + dx;
		x2 = x + 2*dx;

		sy1 = 0;
		sy2 = 0;
		sy3 = 0;

		for (int j=0; j<m; j++) {
			y = c + 2*j*dy;
			y1 = y + dy;
			y2 = y + 2*dy;

			s1 = ( ( f(x, y) + 4*f(x, y1) + f(x, y2) )/3 )*dy;
			s2 = ( ( f(x1, y) + 4*f(x1, y1) + f(x1, y2) )/3 )*dy;
			s3 = ( ( f(x2, y) + 4*f(x2, y1) + f(x2, y2) )/3 )*dy;

			sy1 += s1;
			sy2 += s2;
			sy3 += s3;
		}

		sx = ( (sy1 + 4*sy2 + sy3)/3 )*dx;
		s += sx;
	}

	printf("s = %f \n", s);

	return 0;
}