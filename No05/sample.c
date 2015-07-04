#include <stdio.h>
#include <math.h>

int main() {

	FILE *data;
	double f, dx, x, i;
	data = fopen("sample_data.csv", "w");
	dx = 0.1;

	for (i=0; i<100; i++) {
		x = i * dx;
		f = sqrt(3*x) * exp(-2*x);
		printf("x = %f f = %f\n", x, f);
		fprintf(data,"%f, %f\n", x, f);
	}

	fclose(data);

	return 0;
}