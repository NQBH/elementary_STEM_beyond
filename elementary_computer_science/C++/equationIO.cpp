#include "equationIO.h"
#include "equation.h"
#include <iostream>
using namespace std;

void sol_print(int num_sol, double x1, double x2, double x3, double x4)
{
	switch (num_sol)
	{
		case Undetermined:
			cout << "The equation is undetermined.\n";
			break;
		case NoSolution:
			cout << "The equation has no solution.\n";
			break;
		case 1:
			cout << "The equation has only 1 solution: " << x1 << ".\n";
			break;
		case 2:
			cout << "The equation has 2 solutions: " << x1 << " & " << x2 << ".\n";
			break;
		case 3:
			cout << "The equation has 3 solutions: " << x1 << ", " << x2 << ", & " << x3 << ".\n";
			break;
		case 4:
			cout << "The equation has 4 solutions: " << x1 << ", " << x2 << ", " << x3 << ", & " << x4 << ".\n";
			break;
	}
}
// ax + b = 0
void eqn_display(double a, double b) {
	cout << a << "x + " << b << " = 0";
}
// ax^2 + bx + c = 0 or ax^4 + bx^2 + c = 0
void eqn_display(double a, double b, double c, bool type4) {
	if (type4)
		cout << a << "x^4 + " << b << "x^2 + " << c << " = 0.";
	else
		cout << a << "x^2 + " << b << "x + " << c << " = 0.";
}

void eqn_input(double& a, double& b) {
	cout << "Input a, b: ";
	cin >> a >> b;
}

void eqn_input(double& a, double& b, double& c) {
	cout << "Input a, b, c: ";
	cin >> a >> b >> c;
}