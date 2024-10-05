#include <stdio.h>
int main() {
	int a, b, vmax, vmin;
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	vmin = a;
	vmax = b;
	if (a > b) {
		vmin = b;
		vmax = a;
	}
	printf("Max: %d.\n", vmax);
	printf("Min: %d.\n", vmin);
}