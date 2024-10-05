#include <stdio.h>
#include <math.h>
double round(double x); // Declare function round()
double round(double x, int n); // Declare function round() with n-digit precision
void round(double *x, int n); // Declare function round() with n-digit precision & pointer

double round(double x) {
	double ans;
	if (x >= 0)
		ans = floor(x + 0.5);
	else
		ans = -floor(-x + 0.5);
	return ans;
}

double round(double x, int n) {
	double ans, scale = pow(10, n);
	x *= scale;
	if (x >= 0)
		ans = floor(x + 0.5)/scale;
	else
		ans = -floor(-x + 0.5)/scale;
	return ans;
}

void round(double *x, int n) {
	double scale = pow(10, n), y = *x;
	y *= scale;
	if (y >= 0)
		*x = floor(y + 0.5)/scale;
	else
		*x = -floor(-y + 0.5)/scale;
}

int main() {
	double a; int n;
	printf("Input a = ");
	scanf("%lf", &a);
	printf("Round to n = ");
	scanf("%d", &n);
	printf("round(%lf) = %lf.\n", a, round(a));
	printf("round(%lf,%d) = %lf.\n", a, n, round(a, n));
	a = -2.81828;
	printf("a (old) = %lf.\n", a);
	round(&a, 4);
	printf("a (rounded) = %lf.\n", a);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc round.c -o round
/usr/bin/ld: /tmp/ccnM9Bnx.o: in function `round':
round.c:(.text+0x3c): undefined reference to `floor'
/usr/bin/ld: round.c:(.text+0x63): undefined reference to `floor'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ round.c -o round
*/