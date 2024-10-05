#include <stdio.h>
int dx = 7;
int main() {
	printf("dx (global) = %d.\n", dx);
	{
		int dx = 9;
		printf("dx (local/sub block) = %d.\n", dx);
	}
	printf("dx (global) is unchanged = %d.\n", dx);
}