#include <stdio.h>

long count_divisor(long n) {
	long count = 0;
	for (long i = 1; i <= n; ++i)
		if (n % i == 0)
			++count;
	return count;
}

void main() {
	long n, count;
	printf("Input n: ");
	scanf("%ld", &n);
	count = count_divisor(n);
	printf("Number of divisors of %ld is %ld.\n", n, count);
	if (count == 2)
		printf("%ld is prime.\n", n);
	else
		printf("%ld is composite.\n", n);
}