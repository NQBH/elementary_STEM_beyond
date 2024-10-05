#include <stdio.h>
void sum_product1(long n, long& S, long& P) {
	S = 0; P = 1;
	for (int i = 1; i <= n; ++i) {
		S += i;
		P *= i;
	}
}

void sum_product2(long n, long& S, long& P) {
	S = 0; P = 1;
	for (; n >= 1; --n) {
		S += n;
		P *= n;
	}
}

int main() {
	long n, S, P;
	scanf("%ld", &n);
	sum_product1(n, S, P);
	printf("S = %ld, P = %ld.\n", S, P);
	sum_product2(n, S, P);
	printf("S = %ld, P = %ld.\n", S, P);
}