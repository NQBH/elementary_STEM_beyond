#include "equationIO.h"
#include "equation.h"
#include <iostream>
using namespace std;
int eqn_choice() {
	int choice;
	cout << "(1) ax + b = 0.\n";
	cout << "(2) ax^2 + bx + c = 0.\n";
	cout << "(3) ax^4 + bx^2 + c = 0.\n";
	cout << "(0) Exit.\n";
	cout << "Enter your choice: ";
	cin >> choice;
	return choice;
}

void input(int type, double& a, double& b, double& c) {
	switch (type) {
		case 1:
			eqn_input(a, b);
			eqn_display(a, b);
			break;
		case 2: case 3:
			eqn_input(a, b, c);
			eqn_display(a, b, c, type == 3);
			break;
	}
	cout << '\n';
}

int main() {
	int type = 0, num_sol = 0;
	double a, b, c, x1, x2, x3, x4;
	do {
		type = eqn_choice();
		if (type < 0 || type > 3) {
			cout << "Invalid choice!\n";
			continue;
		}
		if (type == 0)
			continue;
		input(type, a, b, c);
		switch (type) {
			case 1:
				num_sol = linear_eqn(a, b, x1);
				break;
			case 2:
				num_sol = quadratic_eqn(a, b, c, x1, x2);
				break;
			case 3:
				num_sol = quartic_eqn(a, b, c, x1, x2, x3, x4);
				break;
		}
		sol_print(num_sol, x1, x2, x3, x4);
	} while (type != 0);
}
// g++ -O2 -Wall equation_main.cpp equation.cpp equation.h equationIO.cpp equationIO.h -o equation