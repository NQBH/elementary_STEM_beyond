#include <stdio.h>
#include <string.h>

void count(char* str, int& count_char, int& count_digit, int& count_other) {
	count_char = count_digit = count_other = 0;
	for (int i = 0; i < (int)strlen(str); ++i)
		if ('a' <= str[i] && str[i] <= 'z')
			++count_char;
		else if ('A' <= str[i] && str[i] <= 'Z')
			++count_char;
		else if ('0' <= str[i] && str[i] <= '9')
			++count_digit;
		else
			++count_other;
}

int main() {
	const int MaxLen = 1024;
	char str[MaxLen];
	int count_char, count_digit, count_other;
	printf("Input a string: ");
	fgets(str, MaxLen, stdin);
	count(str, count_char, count_digit, count_other);
	printf("Number of alphabet characters is %d.\n", count_char);
	printf("Number of digits is %d.\n", count_digit);
	printf("Number of other characters is %d.\n", count_other);
}