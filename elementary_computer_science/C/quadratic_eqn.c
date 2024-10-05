#include <stdio.h>
#include <math.h>
void quadratic_eqn(double a, double b, double c, double& x1, double& x2, int& num_roots) {
	double Delta = b*b - 4*a*c, sqrtDelta;
	if (Delta > 0) {
		num_roots = 2;
		sqrtDelta = sqrt(Delta);
		x1 = (-b + sqrtDelta)/(2*a);
		x2 = (-b - sqrtDelta)/(2*a);
		printf("This quadratic equation has 2 real distinct roots: %lf, %lf.\n", x1, x2);
	}
	else if (Delta == 0) {
		num_roots = 1;
		x1 = -b/(2*a);
		x2 = x1;
		printf("This quadratic equation has a unique real root: %lf.\n", x1);
	}
	else {
		num_roots = 0;
		printf("This quadratic equation has no real roots.");
	}
}
int main() {
	double x1 = 0, x2 = 0;
	int num_roots = 0;
	quadratic_eqn(1, 4, 3, x1, x2, num_roots);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc quadratic_eqn.c -o quadratic_eqn
quadratic_eqn.c:3:56: error: expected ‘;’, ‘,’ or ‘)’ before ‘&’ token
    3 | void quadratic_eqn(double a, double b, double c, double& x1, double& x2, int& num_roots) {
      |                                                        ^
quadratic_eqn.c: In function ‘main’:
quadratic_eqn.c:24:9: warning: implicit declaration of function ‘quadratic_eqn’ [-Wimplicit-function-declaration]
   24 |         quadratic_eqn(1, 4, 3, x1, x2, num_roots);
      |         ^~~~~~~~~~~~~
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ quadratic_eqn.c -o quadratic_eqn
*/