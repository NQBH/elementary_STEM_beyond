#include <math.h>
#include <stdio.h>
int main() {
	double x, y, Fxy;
	printf("x = ");
	scanf("%lf", &x);
	printf("y = ");
	scanf("%lf", &y);
	Fxy = x + sqrt(1 + y*y);
	printf("F(x,y) = x + sqrt(1 + y*y) = %lf.\n", Fxy);
	return 1;
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc algebraic_expression.c -o algebraic_expression
/usr/bin/ld: /tmp/ccjHrcyV.o: in function `main':
algebraic_expression.c:(.text+0x9e): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ algebraic_expression.c -o algebraic_expression
*/