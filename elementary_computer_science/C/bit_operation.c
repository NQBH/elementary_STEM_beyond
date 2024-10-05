#include <stdio.h>
int main() {
	// unsigned char a = 45, b = 58, n = 4;
	unsigned char a, b, n;
	scanf("%hhu", &a);
	scanf("%hhu", &b);
	scanf("%hhu", &n);
	printf("%d & %d = %d.\n", a, b, a & b);
	printf("%d | %d = %d.\n", a, b, a | b);
	printf("%d ^ %d = %d.\n", a, b, a ^ b);
	printf("~%d = %d.\n", a, ~a);
	printf("%d << %d = %d.\n", a, n, a << n);
	printf("%d >> %d = %d.\n", a, n, a >> n);
}