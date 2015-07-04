#include <stdio.h>
#include <math.h>


int main() {

	double a, x;

	printf("xを入力して下さい。x = ");
	scanf("%lf", &x);

	if (x > 0) {
		a = x;
		printf("xは0または正です。絶対値は x = %f \n", a);
	} else {
		a = -x;
		printf("xは負です。絶対値は x = %f \n", a);
	}
}