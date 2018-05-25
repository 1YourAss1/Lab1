#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main() {
	double x, f;
	printf("x = ");
	scanf("%f", &x);
	f = (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
	printf("f(x) = %f \n", f);

	printf("x = ");
	scanf("%f", &x);
	f = (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
	printf("f(x) = %f \n", f);

	_getch();
	return 0;
}