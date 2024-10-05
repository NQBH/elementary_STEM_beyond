#include <stdio.h>
int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a % b == 0) printf("%d is divisible by %d.\n", a, b);
	else printf("%d is not divisible by %d.\n", a, b);
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall divisible_by.c -o divisible_by