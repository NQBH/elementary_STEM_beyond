#include <stdio.h>
int main() {
	long n;
	double S = 0, i;
	printf("Input n = ");
	scanf("%ld", &n);
	for (i = 1; i <= n; ++i)
		S += 1/(i*i); // S += 1.0/(i*i); // if declare: int i;
	printf("Result = %lf.\n", S);
}