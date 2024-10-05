#include <stdio.h>
#include <string.h>
#define MAXSZ 256
#define gets_s(s,L) {fgets((s), (L) + 1, stdin); (s)[strlen(s) - 1] = 0;}
int main () {
	char str1[MAXSZ + 1], str2[MAXSZ + 1], str3[MAXSZ + 1];
	printf("1st string: ");
	gets_s(str1, MAXSZ); // fgets(str1, sizeof str1, stdin); // No need \n in output format
	fflush(NULL); // _flushall();
	printf("2nd string: ");
	gets_s(str2, MAXSZ); // fgets(str2, sizeof str2, stdin); // No need \n in output format
	printf("String without blank: ");
	scanf("%s", &str3);
	printf("Out strings are:\n%s\n%s\n%s\n", str1, str2, str3);
	return 1;
}