#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	// 1st solution
	if (n % 2 == 0) printf("%d is even.\n", n);
	else printf("%d is odd.\n", n);
	// 2nd solution
	(n % 2 == 0) ? printf("%d is even.\n", n) : printf("%d is odd.\n", n);
	// 3rd solution
	if ((n & 1) == 0) printf("%d is even.\n", n);
	else printf("%d is odd.\n", n);
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall even_odd.c -o even_odd