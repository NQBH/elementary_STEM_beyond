#include <stdio.h>
int main() {
	// 1st solution: while
	float sum = 0, x = 1;
	while (x > 0) {
		printf("Input a positive number = ");
		scanf("%f", &x);
		if (x > 0)
			sum += x;
	}
	printf("Sum all positive numbers input = %f.\n", sum);
	// 2nd solution: do while
	sum = 0;
	do {
		printf("Input a positive number = ");
		scanf("%f", &x);
		if (x > 0)
			sum += x;
	} while (x > 0);
	printf("Sum all positive numbers input = %f.\n", sum);
	// 3rd solution: while with break
	sum = 0;
	while(1) {
		printf("Input a positive number = ");
		scanf("%f", &x);
		if (x <= 0)
			break;
		sum += x;
	}
	printf("Sum all positive numbers input = %f.\n", sum);
	// 4th solution: do while with break
	sum = 0;
	do {
		printf("Input a positive number = ");
		scanf("%f", &x);
		if (x <= 0)
			break;
		sum += x;
	} while (x > 0);
	printf("Sum all positive numbers input = %f.\n", sum);
	// 5th solution: for with break
	sum = 0;
	for(;;) {
		printf("Input a positive number = ");
		scanf("%f", &x);
		if (x <= 0)
			break;
		sum += x;
	}
	printf("Sum all positive numbers input = %f.\n", sum);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc sum_positive.c -o sum_positive
sum_positive.c: In function ‘main’:
sum_positive.c:23:15: error: ‘true’ undeclared (first use in this function)
   23 |         while(true) {
      |               ^~~~
sum_positive.c:2:1: note: ‘true’ is defined in header ‘<stdbool.h>’; did you forget to ‘#include <stdbool.h>’?
    1 | #include <stdio.h>
  +++ |+#include <stdbool.h>
    2 | int main() {
sum_positive.c:23:15: note: each undeclared identifier is reported only once for each function it appears in
   23 |         while(true) {
      |               ^~~~
*/