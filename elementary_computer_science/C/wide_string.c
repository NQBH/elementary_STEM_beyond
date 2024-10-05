#include <stdio.h>
#include <wchar.h>
#include <stdint.h> // To use int type int64_t
#define MAXSZ 256

int64_t str_to_int64(char* str) {
	int64_t ans;
	sscanf(str, "%lld", &ans);
	return ans;
}

int64_t str_to_int64(wchar_t* wstr) {
	int64_t ans;
	swscanf(wstr, L"%lld", &ans);
	return ans;
}

int main() {
	char str[MAXSZ];
	wchar_t wstr[MAXSZ];
	float x = 1.825F, y = -15.275F;
	sprintf(str, "Point (%f, %f)\n", x, y);
	swprintf(wstr, MAXSZ, L"Point (%f, %f)\n", x, y);
	// str & wstr are ready for use to output to files, printers, or graphics screen ...
	
	char str1[] = "12345678910"; // 11 characters, exceed number of digits of long
	wchar_t wstr1[] = L"1110987654321"; // 13 characters, exceed number of digits of long
	int64_t m, n;
	m = str_to_int64(str1);
	n = str_to_int64(wstr1);
	sscanf("(-21.625, 38.125)", "(%f, %f)", &x, &y);
	printf("Results m = %lld, n = %lld, x = %f, y = %f\n", m, n, x, y);
}