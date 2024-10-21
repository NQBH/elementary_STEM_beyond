#include <cmath>
#include "equation.h"

int linear_eqn(double a, double b, double& x) {
	int num_sol;
	if (a != 0) {
		x = -b/a;
		num_sol = 1;
	}
	else { // a = 0
		x = 0;
		if (b == 0)
			num_sol = Undetermined;
		else
			num_sol = NoSolution;
	}
	return num_sol;
}

int quadratic_eqn(double a, double b, double c, double& x1, double& x2) {
	int num_sol;
	x1 = x2 = 0; // default
	if (a == 0)
		num_sol = linear_eqn(b, c, x1);
	else {
		double Delta = b*b - 4*a*c, two_a = 2*a;
		if (Delta < 0)
			num_sol = NoSolution;
		else if (Delta == 0) {
			x1 = x2 = -b/two_a;
			num_sol = 1;
		}
		else {
			double sqrtDelta = sqrt(Delta);
			x1 = (-b - sqrtDelta)/two_a;
			x2 = (-b + sqrtDelta)/two_a;
			num_sol = 2;
		}
	}
	return num_sol;
}

int quartic_eqn(double a, double b, double c, double& x1, double& x2, double& x3, double& x4) {
	int num_sol, num_sol1, num_sol2;
	double y1, y2;
	x1 = x2 = x3 = x4 = 0;
	num_sol1 = quadratic_eqn(a, b, c, y1, y2);
	switch (num_sol1) {
		case NoSolution: case Undetermined:
			num_sol = num_sol1;
			break;
		case 1:
			num_sol = quadratic_eqn(1, 0, -y1, x1, x2);
			break;
		case 2:
			num_sol2 = quadratic_eqn(1, 0, -y1, x1, x2);
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