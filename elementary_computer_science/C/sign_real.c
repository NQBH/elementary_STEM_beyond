#include <stdio.h>
#define NUM_MAX 20
void count_number(float a[], int n, int *count_positive, int *count_negative, int *count_zero) {
	*count_positive = 0;
	*count_negative = 0;
	*count_zero = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] > 0)
			++(*count_positive);
		else if (a[i] < 0)
			++(*count_negative);
		else // a[i] == 0
			++(*count_zero);
}

void main() {
	int n, pos, neg, zero;
	float a[NUM_MAX];
	printf("Number of elements n = ");
	scanf("%d", &n);
	if (n < 1 || n > NUM_MAX)
		return;
	for (int i = 0; i < n; ++i) {
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	count_number(a, n, &pos, &neg, &zero);
	printf("Number of positives: %d.\n", pos);
	printf("Number of negatives: %d.\n", neg);
	printf("Number of zeroes: %d.\n", zero);
}