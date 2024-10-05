#include <stdio.h>
void main() {
	long m, n; double S = 0, P = 1;
	printf("Input n: ");
	scanf("%ld", &n);
	m = n;
	for (; m >= 1; --m) {
		if (m % 4 == 1)
			S += m/(double)(1 + m*m);
		if (m % 2 == 1 && m % 3 == 1)
			P *= m;
	}
	printf("S = %lf.\n", S);
	printf("P = %lf.\n", P);
}