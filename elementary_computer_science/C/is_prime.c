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
int main() {
	long n;
	printf("Input n = ");
	scanf("%ld", &n);
	printf("isprime(%ld) = %d.\n", n, is_prime(n));
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc is_prime.c -o is_prime
/usr/bin/ld: /tmp/ccZdZKWu.o: in function `is_prime':
is_prime.c:(.text+0x3d): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ is_prime.c -o is_prime
*/