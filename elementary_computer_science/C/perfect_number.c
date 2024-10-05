#include <stdio.h>

long sum_divisor(long n) {
	long S = 0, k = n;
	if (n <= 0)
		return -1;
	while (--k)
		if (n % k == 0)
			S += k;
	return S;
}

int is_perfect(long n) {
	return (n == sum_divisor(n));
}

void main() {
	long n;
	printf("Input n: ");
	scanf("%ld", &n);
	while (n--)
		if (is_perfect(n))
			printf("%ld\n", n);
}