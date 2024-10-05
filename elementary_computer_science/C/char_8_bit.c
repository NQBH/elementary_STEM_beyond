#include <stdio.h>
int main () {
	char ch;
	ch = 65;
	printf("ch = %c.\n", ch);
	ch = 'A';
	printf("ch = %c.\n", ch);
	printf("ch = ");
	scanf("%c", &ch);
	printf("ASCII code = %d.\n", ch);
	ch -= ('a' - 'A')*(ch >= 'a' && ch <= 'z');
	printf("Upper case: %c.\n", ch);
	return 1;
}