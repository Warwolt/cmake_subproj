#include <factorial/factorial.h>

#include <stdio.h>

int main(void) {
	for (int i = 0; i < 5; i++) {
		printf("%d! = %d\n", i, factorial(i));
	}
	return 0;
}
