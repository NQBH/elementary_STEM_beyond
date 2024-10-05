#include <stdio.h>
int main() {
	long n, sum = 0, k = 1;
	printf("Input n = ");
	scanf("%ld", &n);
	while (sum + k <= n) {
		sum += k;
		++k;
	}
	--k;
	/* // do while option
	do {
		sum += k;
		++k;
	} while (sum < n);
	if (sum > n) {
		sum -= k;
		--k
	}
	*/	
	printf("k = %ld.\n", k);
	printf("Sum of 1st k positive integers = %ld.\n", sum);
	if (sum == n)
		printf("%ld is the sum of 1st k positive integers.\n", n);
	else
		printf("%ld is not the sum of 1st k positive integers.\n", n);
}