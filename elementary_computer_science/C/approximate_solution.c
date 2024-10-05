#include <stdio.h>
#include <math.h>
#define epsilon 0.000000001
double Func(double x) {
	return pow(x, 9) + x + 1;
}

double Func(double x, int n) {
	return pow(x, 2*n + 1) + x + 1;
}

double Func1(double x) {
	return pow(x, 5) + 7*x + 1; // Function x^5 + 7x + 1
}

double Func2(double x) {
	return 2*pow(x, 11) + 17*pow(x, 5) + 1; // Function 2x^11 + 17x^5 + 1
}

void Solve(double *x) {
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func(left)*Func(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	*x = (left + right)/2;
}

void Solve(double *x, int n) {
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func(left, n)*Func(mid, n) < 0)
			right = mid;
		else
			left = mid;
	}
	*x = (left + right)/2;
}

double Solve(double F(double x), double a, double b) {
	double left = a, right = b;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (F(left)*F(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	return (left + right)/2;
}

int main() {
	double x;
	int n;
	printf("n = ");
	scanf("%d", &n);
	Solve(&x);
	printf("x = %lf.\n", x);
	printf("Test: %lf.\n", Func(x));
	Solve(&x, n);
	printf("x = %lf.\n", x);
	printf("Test: %lf.\n", Func(x, n));
	x = Solve(Func1, -1, 0);
	printf("1st equation, x = %lf.\n", x);
	printf("Test: %lf.\n", Func1(x));
	x = Solve(Func2, -1, 0);
	printf("2nd equation, x = %lf.\n", x);
	printf("Test: %lf.\n", Func2(x));
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ gcc approximate_solution.c -o approximate_solution
/usr/bin/ld: /tmp/ccq7gbyS.o: in function `Func':
approximate_solution.c:(.text+0x27): undefined reference to `pow'
collect2: error: ld returned 1 exit status
nqbh@nqbh-msi:~/hobby/elementary_computer_science/C$ g++ approximate_solution.c -o approximate_solution
*/