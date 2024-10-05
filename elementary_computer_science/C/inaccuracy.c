#include <stdio.h>
int main() {
	double a = 1.125, b = 1.250, c = 2.375, x = 1.123, y = 1.456, z = 2.579;
	if (a + b == c)
		printf("a + b = c.\n");
	else {
		printf("a + b != c.\n");
		printf("a + b - c = %e.\n", a + b - c);
	}
	if (x + y == z)
		printf("x + y = z.\n");
	else {
		printf("x + y != z.\n");
		printf("x + y - z = %e.\n", x + y - z);
	}
	return 1;
}