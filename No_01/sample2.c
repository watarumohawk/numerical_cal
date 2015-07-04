#include <stdio.h>
#include <math.h>
#define pai 3.1415

int main(void) {

	double a, b, r, s1, s2, s3;

	scanf("%lf %lf %lf", &a, &b, &r);
		s1 = a*b;
		s2 = a*b/2.0;
		s3 = pai*r*r;

	printf("a=%f b=%f r=%f s1=%f s2=%f  s3=%f \n", a, b, r, s1, s2, s3);

	return 0;
}