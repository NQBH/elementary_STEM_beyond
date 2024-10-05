#define Max(x, y) ( ( (x) > (y) )? (x) : (y) )
#define MaxArray(a, n, mm) { mm = a[0]; for (int i = 1; i < n; ++i) { mm = Max(mm, a[i]);} }
#include <stdio.h>
int main() {
	double u[] = { 7.3, 11.5, 23.6, -6.8, -8.67, 23.599 };
	double max = 0;
	int n = sizeof(u)/sizeof(u[0]);
	MaxArray(u, n, max);
	printf("Maximum number is %f.\n", max);
}