#include <math.h>

double fun(double x) {
	return (1 - pow(sin(x), 2)) / (1 + sin(2 * x));
}