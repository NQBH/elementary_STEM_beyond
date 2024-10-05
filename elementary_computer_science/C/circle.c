#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	// #define Pi 3.14159
	float R, perimeter, area;
	scanf("%f", &R);
	if (R < 0) {
		printf("Error: R < 0.\n");
		exit(0);
	}
	perimeter = 2*M_PI*R;
	area = M_PI*R*R;
	printf("The perimeter & the area of the circle whose radius R = %f are P = %f & S = %f.\n", R, perimeter, area);
}
// Terminal: gcc circle.c -o circle