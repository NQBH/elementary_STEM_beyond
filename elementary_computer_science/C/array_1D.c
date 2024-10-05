#include <stdio.h>
#define N 50 // const int N = 50;

void array_int_input(int a[N], int& n) {
	while (1) {
		printf("Number of elements will be used (<= %d): ", N);
		scanf("%d", &n);
		if ((n < 0) || (n > N))
			printf("Wrong input, reinput ...\n");
		else
			break;
	}
	for (int i = 0; i < n; ++i) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void array_int_output(int a[N], int n) {
	printf("a[]:");
	for (int i = 0; i < n; ++i)
		printf(" %d", a[i]);
	printf(".\n");
}

void sort_array_int(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
}

bool insert_array_int(int a[], int& n, int x, int k) {
	if (k < 0 || k > n)
		return false;
	for (int i = n - 1; i >= k; --i)
		a[i+1] = a[i];
	a[k] = x;
	++n;
	return true;
}

void remove_array_int_nonordered(int a[], int& n, int k) {
	if (k < 0 || k > n)
		return;
	a[k] = a[n-1];
	--n;
}

void remove_array_int_ordered(int a[], int& n, int k) {
	if (k < 0 || k > n)
		return;
	for (int i = k; i < n - 1; ++i)
		a[i] = a[i+1];
	--n;
}

void split_even_odd_reduced(int a[], int n, int even[], int& k, int odd[], int& h) {
	k = h = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 == 0)
			even[k++] = a[i];
		else
			odd[h++] = a[i];
}

void split_even_odd(int a[], int n, int even[], int& k, int odd[], int& h) {
	k = h = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] % 2 == 0) {
			even[k] = a[i];
			++k;
		}			
		else {
			odd[h] = a[i];
			++h;
		}
}

void split_half(int a[], int n, int b[], int& k, int c[], int& h) {
	int i;
	k = h = 0;
	for (i = 0; i < n/2; ++i)
		b[k++] = a[i];
	for (i = n/2; i < n; ++i)
		c[h++] = a[i];
}

void consecutive_merge_int_array(int a[], int& n, int b[], int k, int c[], int h) {
	int i;
	n = 0;
	for (i = 0; i < k; ++i)
		a[n++] = b[i];
	for (i = 0; i < h; ++i)
		a[n++] = c[i];
}

void alternating_merge_int_array(int a[], int& n, int b[], int k, int c[], int h) {
	int i, j;
	i = j = n = 0;
	while (i < k && j < h) {
		if (n % 2 == 0)
			a[n++] = b[i++];
		else
			a[n++] = c[j++];
	}
	while (i < k)
		a[n++] = b[i++];
	while (j < h)
		a[n++] = c[j++];
}

int main() {
	int a[N], n, x, k;
	array_int_input(a, n);
	array_int_output(a, n);
	sort_array_int(a, n);
	array_int_output(a, n);
	scanf("%d", &x);
	scanf("%d", &k);
	insert_array_int(a, n, x, k);
	array_int_output(a, n);
	remove_array_int_nonordered(a, n, k);
	array_int_output(a, n);
	remove_array_int_ordered(a, n, k);
	array_int_output(a, n);
}