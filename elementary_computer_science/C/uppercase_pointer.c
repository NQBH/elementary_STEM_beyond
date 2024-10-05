#include <stdio.h>
void upperCase(unsigned char *pCh) {
	if (*pCh >= 'a' && *pCh <= 'z')
		*pCh = (*pCh) - 32;
}

int main() {
	unsigned char ch;
	printf("Input a character: ");
	scanf("%c", &ch);
	upperCase(&ch);
	printf("After being uppercased: %c.\n", ch);
	return 0;
}