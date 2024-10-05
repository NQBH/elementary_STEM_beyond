#include <stdio.h>

int appear(float a[], int n, float x) {
	int count = 0;
	while (n--)
		if (x == a[n])
			++count;
	return (count > 0);
}

int great_all(float a[], int n, float x) {
	int count = 0, m = n;
	while (m--)
		if (x > a[m])
			++count;
	return (count == n);
}

int less_one(float a[], int n, float x) {
	int count = 0;
	while (n--)
		if (x < a[n])
			++count;
	return (count > 0);
}

int all_negative (float a[], int n) {
	return great_all(a, n, 0);
}

void main() {
	int n = 3;
	float a[] = {1, 2.1, -3}, x = 1;
	printf("%d %d %d %d.\n", appear(a, n, x), great_all(a, n, x), less_one(a, n, x), all_negative(a, n));
}