#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

float x, f;

void fun(void) {
	f = (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
}