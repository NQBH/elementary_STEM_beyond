#include <math.h>
#include <stdio.h>
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%lf.\n", (a*a + b*b + c*c)/(a*b*c) + sqrt(a*b*c));
	return 1;
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc algebraic_expression.c -o algebraic_expression
/usr/bin/ld: /tmp/cc0OACrB.o: in function `main':
algebraic_expression.c:(.text+0x11c): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ algebraic_expression.c -o algebraic_expression
*/