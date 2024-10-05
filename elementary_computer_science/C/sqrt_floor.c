#include <stdio.h>

long sqrt_floor(long n) {
	long sum = 1, k = 1, t;
	while (sum < n) {
		k += 2;
		sum += k;
	}
	if (sum > n)
		k -= 2;
	t = (k + 1)/2;
	return t;
}

void main() {
	long n, t;
	printf("Input n = ");
	scanf("%ld", &n);
	t = sqrt_floor(n);
	printf("floor(sqrt(%ld)) = %ld.\n", n, t);
}