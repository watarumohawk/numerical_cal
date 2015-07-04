#include <stdio.h>
#include <math.h>
#define f(x) sin(x)

int main(void) {
	double a, b, x, x1, x2, dx, s, s1;
	int n;

	printf("分割数を入力して下さい。 n = ");
	scanf("%d", &n);

	a = 0;

	FILE *data;
	data = fopen("problem_data.csv", "w");

	for (int i=0; i<=360; i++) {
        b = i*(M_PI/180.);
        dx = (b-a)/(2*n);
        s = 0;

        for(int j=0; j<=n; j++) {
            x = a + 2*j*dx;
            x1 = x + dx;
            x2 = x + 2*dx;
            s1 = ( ( f(x) + 4*f(x1) + f(x2) )/3 )*dx;
            s += s1;
        }

        fprintf(data, "%f, %f\n", b, s);
	}

	fclose(data);

	printf("n = %d s = %f\n", n, s);

	return 0;
}