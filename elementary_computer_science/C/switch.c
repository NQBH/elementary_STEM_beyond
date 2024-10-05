#include <stdio.h>
int main() {
	int n;
	char* str;
	printf("Input n = ");
	scanf("%d", &n);
	switch (n)
	{
		case 0: str = "Zero"; break;
		case 1: str = "One"; break;
		case 2: str = "Two"; break;
		case 3: case 4: case 5:
			str = "Three to Five"; break;
		default:
			if (n < 0) str = "Negative";
			else str = "Greater than Five";
	}
	printf("Result: %s.\n", str);
}