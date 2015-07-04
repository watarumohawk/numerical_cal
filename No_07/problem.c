#include <stdio.h>
#include <math.h>
#define f(x) sin(x)


int main(void) {
	double x, x1, x2, dx, f2;

	printf("Δxを入力して下さい。Δx= ");
	scanf("%lf", &dx);

	FILE *data;
	data = fopen("problem_data.csv", "w");

	for (int i=0; i<360; i++) {
		x = i*( M_PI/180. );
		x1 = x - dx;
		x2 = x + dx;

		f2 = ( f(x2) - 2*f(x) + f(x1) )/(dx*dx);
		printf("x = %f f2 = %f\n", x, f2);
		fprintf(data, "%f, %f\n", x, f2);
	}

	fclose(data);

	printf("2階微分 f2 = %f\n", f2);

	return 0;
}