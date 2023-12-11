#include <factorial/factorial.h>

int factorial(int n) {
	int y = 1;
	for (int i = 1; i <= n; i++) {
		y *= i;
	}
	return y;
}
