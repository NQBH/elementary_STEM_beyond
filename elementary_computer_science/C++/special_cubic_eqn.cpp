#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double a, b, x, delta;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	delta = pow(a, 6.0) + pow(b, 2.0);
	delta = sqrt(delta);
	x = pow(delta - b, 1.0/3) - pow(delta + b, 1.0/3);
	cout << "Root x = " << x << ".\n";
	double test = x*x*x + 3*a*a*x + 2*b;
	cout << "x^3 + 3a^2x + 2b = " << test << ".\n";
}