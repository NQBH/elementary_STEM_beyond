#include <stdio.h>
#include <math.h>
#define NoSolution 0
#define Undetermined -1
int linear_eqn(double a, double b, double *x) {
	int num_sol;
	if (a != 0) {
		*x = -b/a;
		num_sol = 1;
	}
	else { // a = 0
		*x = 0;
		if (b == 0)
			num_sol = Undetermined;
		else
			num_sol = NoSolution;
	}
	return num_sol;
}

int quadratic_eqn(double a, double b, double c, double *x1, double *x2) {
	int num_sol;
	*x1 = *x2 = 0; // default
	if (a == 0)
		num_sol = linear_eqn(b, c, x1); // x1 is the same as &(*x1)
	else {
		double Delta = b*b - 4*a*c, two_a = 2*a;
		if (Delta < 0)
			num_sol = NoSolution;
		else if (Delta == 0) {
			*x1 = *x2 = -b/two_a;
			num_sol = 1;
		}
		else {
			double sqrtDelta = sqrt(Delta);
			*x1 = (-b - sqrtDelta)/two_a;
			*x2 = (-b + sqrtDelta)/two_a;
			num_sol = 2;
		}
	}
	return num_sol;
}

int quartic_eqn(double a, double b, double c, double *x1, double *x2, double *x3, double *x4) {
	int num_sol, num_sol1, num_sol2;
	double y1, y2;
	num_sol1 = quadratic_eqn(a, b, c, &y1, &y2);
	switch (num_sol1) {
		case NoSolution: case Undetermined:
			num_sol = num_sol1;
			break;
		case 1:
			num_sol = quadratic_eqn(1, 0, -y1, x1, x2); // &(*x1) <=> x1
			break;
		case 2:
			num_sol2 = quadratic_eqn(1, 0, -y1, x1, x2); // &(*x1) <=> x1, &(*x2) <=> x2
			switch (num_sol2) {
				case NoSolution:
					num_sol = quadratic_eqn(1, 0, -y2, x1, x2);
					break;
				case 1:
					num_sol = 1 + quadratic_eqn(1, 0, -y2, x2, x3);
					break;
				case 2:
					num_sol = 2 + quadratic_eqn(1, 0, -y2, x3, x4);
					break;
			}
	}
	return num_sol;
}

int main() {
	double a, b, c, x, x1, x2, x3, x4;
	int num_sol_linear, num_sol_quadratic, num_sol_quartic;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);
	// Solve linear equation ax + b = 0
	num_sol_linear = linear_eqn(a, b, &x);
	printf("The number of solution of the linear equation %lfx + %lf = 0 is %d.\n", a, b, num_sol_linear);
	if (num_sol_linear == 0)
		printf("The linear equation %lfx + %lf = 0 has no real root.\n", a, b);
	else
		printf("The only/unique root of the linear equation %lfx + %lf = 0 is %lf.\n", a, b, x);
	// Solve quadratic equation ax^2 + bx + c = 0
	num_sol_quadratic = quadratic_eqn(a, b, c, &x1, &x2);
	printf("The number of solution of the quadratic equation %lfx^2 + %lfx + %lf = 0 is %d.\n", a, b, c, num_sol_quadratic);
	if (num_sol_quadratic == 0)
		printf("The quadratic equation %lfx^2 + %lfx + %lf = 0 has no real root", a, b, c);
	else if (num_sol_quadratic == 1)
		printf("The only/unique root of the quadratic equation %lfx^2 + %lfx + %lf = 0 is %lf.\n", a, b, c, x1);
	else
		printf("The 2 real roots of the quadratic equation %lfx^2 + %lfx + %lf = 0 are %lf, %lf.\n", a, b, c, x1, x2);
	// Solve quartic equation ax^4 + bx^2 + c = 0
	num_sol_quartic = quartic_eqn(a, b, c, &x1, &x2, &x3, &x4);
	printf("The number of solution of the quartic equation %lfx^4 + %lfx^2 + %lf = 0 is %d.\n", a, b, c, num_sol_quartic);
	if (num_sol_quartic == 0)
		printf("The quartic equation %lfx^4 + %lfx^2 + %lf = 0 has no real root", a, b, c);
	else if (num_sol_quartic == 1)
		printf("The quartic equation %lfx^4 + %lfx^2 + %lf = 0 has the unique root: %lf.\n", a, b, c, x1);
	else if (num_sol_quartic == 2)
		printf("The quartic equation %lfx^4 + %lfx^2 + %lf = 0 has 2 real roots: %lf & %lf.\n", a, b, c, x1, x2);
	else if (num_sol_quartic == 3)
		printf("The quartic equation %lfx^4 + %lfx^2 + %lf = 0 has 3 real roots: %lf, %lf, & %lf.\n", a, b, c, x1, x2, x3);
	else
		printf("The quartic equation %lfx^4 + %lfx^2 + %lf = 0 has 4 real roots: %lf, %lf, %lf, & %lf.\n", a, b, c, x1, x2, x3, x4);
}