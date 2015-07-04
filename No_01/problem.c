#include <stdio.h>
#include <math.h>
#define pai 3.14159265

int main(void) {

	double rad, deg;

	printf("角度（°）を入力して下さい。 deg=");

	scanf("%lf", &deg);

		rad = deg*(pai/180);

	printf("rad=%f \n", rad);

	return 0;
}