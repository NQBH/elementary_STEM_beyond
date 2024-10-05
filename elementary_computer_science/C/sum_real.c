#include <stdio.h>
#include <math.h>
int main() {
	double sum = 0, x;
	do {
		printf("Input a positive number = ");
		scanf("%lf", &x);
		if (x <= 0)
			continue;
		sum += 1/(1 + sqrt(1 + x*x));
	} while (x != 0);
	printf("Sum all positive numbers input = %f.\n", sum);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc sum_real.c -o sum_real
/usr/bin/ld: /tmp/ccdUIVGt.o: in function `main':
sum_real.c:(.text+0x87): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ sum_real.c -o sum_real
*/