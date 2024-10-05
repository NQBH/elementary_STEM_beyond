#include <stdio.h>
#include <stdlib.h> // #include <malloc.h> // <=>
int main() {
	int n;
	float *a = NULL;
	printf("Enter array size: ");
	scanf("%d", &n);
	if (n < 1) {
		printf("Size error!");
		return 1;
	}
	a = (float*)malloc(n*sizeof(float));
	if (a == NULL) {
		printf("Mem error!");
		return 1;
	}
	for (int i = 0; i < n; ++i) {
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}
	printf("Data:");
	for (int i = 0; i < n; ++i)
		printf(" %f", a[i]);
	printf(".\n");
	// Do some other things ...
	//Finally freeing memory
	free(a);
	return 0;
}