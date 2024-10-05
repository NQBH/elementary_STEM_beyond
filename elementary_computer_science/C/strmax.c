#include <stdio.h>
#include <string.h>

char *strmax(char* str1, char* str2) {
	if (strcmp(str1, str2) > 0) {
		return str1;
	}
	return str2;
}

int main() {
	const int maxLen = 256;
	char s1[maxLen], s2[maxLen];
	printf("Input s1 = "); gets(s1);
	printf("Input s2 = "); gets(s2);
	printf("Results: %s.\n", strupr(strmax(s1, s2)));
	return 0;
}
// https://stackoverflow.com/questions/1694036/why-is-the-gets-function-so-dangerous-that-it-should-not-be-used
/* ERROR:
/usr/bin/ld: /tmp/ccjmg58O.o: in function `main':
strmax.c:(.text+0x1d2): warning: the `gets' function is dangerous and should not be used.
/usr/bin/ld: strmax.c:(.text+0x217): undefined reference to `strupr'
collect2: error: ld returned 1 exit status
*/