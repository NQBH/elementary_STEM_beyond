#include <cmath>
#include <iostream>
using namespace std;
const int NoSolution = 0, Undetermined = -1;
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

int main() {
	double a, b, c, x, x1, x2, x3, x4;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	// Solve linear equation ax + b = 0
	int num_sol_linear = linear_eqn(a, b, x);
	cout << "The number of solution of the linear equation " << a << "x + " << b << " = 0 is " << num_sol_linear << ".\n";
	if (num_sol_linear == 0)
		cout << "The linear equation " << a << "x + " << b << " = 0 has no real root." << ".\n";
	else
		cout << "The linear equation " << a << "x + " << b << " = 0 has the unique real root: " << x << ".\n";
	// Solve quadratic equation ax^2 + bx + c = 0
	int num_sol_quadratic = quadratic_eqn(a, b, c, x1, x2);
	cout << "The number of solution of the quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 is " << num_sol_quadratic << ".\n";
	if (num_sol_quadratic == 0)
		cout << "The quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 has no real root." << ".\n";
	else if (num_sol_quadratic == 1)
		cout << "The quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 has the unique root: " << x1 << ".\n";
	else
		cout << "The quadratic equation " << a << "x^2 + " << b << "x + " << c << " = 0 has 2 real roots: " << x1 << ", " << x2 << ".\n";
	// Solve quartic equation ax^4 + bx^2 + c = 0
	int num_sol_quartic = quartic_eqn(a, b, c, x1, x2, x3, x4);
	cout << "The number of solution of the quartic equation " << a << "x^4 + " << b << "x^2 + " << c << "= 0 is " << num_sol_quartic << ".\n";
	if (num_sol_quartic == 0)
		cout << "The quartic equation " << a << "x^4 + " << b << "x^2 + " << c << " = 0 has no real root" << ".\n";
	else if (num_sol_quartic == 1)
		cout << "The quartic equation " << a << "x^4 + " << b << "x^2 + " << c << " = 0 has the unique root: " << x1 << ".\n";
	else if (num_sol_quartic == 2)
		cout << "The quartic equation " << a << "x^4 + " << b << "x^2 + " << c << " = 0 has 2 real roots: " << x1 << ", " << x2 << ".\n";
	else if (num_sol_quartic == 3)
		cout << "The quartic equation " << a << "x^4 + " << b << "x^2 + " << c << " = 0 has 3 real roots: " << x1 << ", " << x2 << ", & " << x3 << ".\n";
	else
		cout << "The quartic equation " << a << "x^4 + " << b << "x^2 + " << c << " = 0 has 4 real roots: " << x1 << ", " << x2 << ", " << x3 << ", & " << x4 << ".\n";
}