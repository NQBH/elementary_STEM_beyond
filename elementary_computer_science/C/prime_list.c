#include <stdio.h>
#include <math.h>

int is_prime(long n) {
	int prime;
	if (n < 2)
		prime = 0;
	else {
		long i = 2;
		double sqrtN = sqrt(n);
		prime = 1;
		while (i <= sqrtN) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
			++i;
		}

	}
	return prime;
}

void prime_list(long n) {
	if (n >= 2) {
		for (long i = 2; i <= n; ++i)
			if (is_prime(i))
				printf("%ld ", i);
	}
	printf("\n");	
}

void prime_list_odd(long n) {
	if (n >= 2) {
		printf("2 ");
		for (long i = 3; i <= n; i += 2)
			if (is_prime(i))
				printf("%ld ", i);
		printf("\n");
	}
}

long get_prime(long n) {
	long p = 2, count_prime = 1, next_num = 3;
	while (count_prime < n) {
		if (is_prime(next_num)) {
			p = next_num;
			++count_prime;
		}
		next_num += 2;
	}
	return p;
}

int main() {
	long n;
	printf("Input n = ");
	scanf("%ld", &n);
	printf("isprime(%ld) = %d.\n", n, is_prime(n));
	prime_list(n);
	prime_list_odd(n);
	printf("The nth prime: %ld.\n", get_prime(n));
}