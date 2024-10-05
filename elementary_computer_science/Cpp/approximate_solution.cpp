#include <iostream>
#include <cmath>
using namespace std;
const double epsilon = 0.000000001;
double Func(double x) {
	return pow(x, 9) + x + 1;
}

double Func(double x, int n) {
	return pow(x, 2*n + 1) + x + 1;
}

double Func1(double x) {
	return pow(x, 5) + 7*x + 1; // Function x^5 + 7x  + 1
}

double Func2(double x) {
	return 2*pow(x, 11) + 17*pow(x, 5) + 1; // Function 2x^11 + 17x^5  + 1
}

void Solve(double& x) {
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func(left)*Func(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	x = (left + right)/2;
}

void Solve(double& x, int n) {
	double left = -1, right = 0;
	while (right - left > epsilon) {
		double mid = (left + right)/2;
		if (Func(left, n)*Func(mid, n) < 0)
			right = mid;
		else
			left = mid;
	}
	x = (left + right)/2;
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
	cin >> n;
	Solve(x);
	cout << "x = " << x << ".\n";
	cout << "Test: " << Func(x) << ".\n";
	Solve(x, n);
	cout << "x = " << x << ".\n";
	cout << "Test: " << Func(x, n) << ".\n";
	x = Solve(Func1, -1, 0);
	cout << "1st equation, x = " << x << ".\n";
	cout << "Test: " << Func1(x) << ".\n";
	x = Solve(Func2, -1, 0);
	cout << "2nd equation, x = " << x << ".\n";
	cout << "Test: " << Func2(x) << ".\n";
}