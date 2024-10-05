#include <math.h>
#include <stdio.h>
int main() {
	double a, b, x, delta, test;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	delta = pow(a, 6.0) + pow(b, 2.0);
	delta = sqrt(delta);
	x = pow(delta - b, 1.0/3) - pow(delta + b, 1.0/3);
	printf("Root x = %lf.\n", x);
	test = x*x*x + 3*a*a*x + 2*b;
	printf("x^3 + 3a^2x + 2b = %lf.\n", test);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc special_cubic_eqn.c -o special_cubic_eqn
/usr/bin/ld: /tmp/ccfehhGa.o: in function `main':
special_cubic_eqn.c:(.text+0x90): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xaf): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xc7): undefined reference to `sqrt'
/usr/bin/ld: special_cubic_eqn.c:(.text+0xf9): undefined reference to `pow'
/usr/bin/ld: special_cubic_eqn.c:(.text+0x123): undefined reference to `pow'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ special_cubic_eqn.c -o special_cubic_eqn
*/