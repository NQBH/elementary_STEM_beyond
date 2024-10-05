#include <stdio.h>
#include <malloc.h>
int* array_input(int* n) {
	int *a = NULL; // a will keep address of beginning of array
	int i, m = 0;
	while (1) {
		printf("Number of elements will be used: \n");
		scanf("%d", &m);
		if (m < 0)
			printf("Wrong input, reinput:\n");
		else
			break;
	}
	a = (int*)malloc(m*sizeof(int)); // Inquire m elements of int type
	if (a == NULL) { // Cannot provide dynamic memory
		*n = 0;
		return NULL;
	}
	for (i = 0; i < m; ++i) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	*n = m;
	return a;
}

void array_output(int a[], int n) {
	int i;
	printf("a[]:");
	for (i = 0; i < n; ++i)
		printf(" %d", a[i]);
	printf("\n");
}

int main() {
	int *b, n;
	b = array_input(&n);
	if (n > 0) {
		array_output(b, n);
		free(b); // Free memory
	}
}