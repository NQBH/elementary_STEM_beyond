#include <iostream>
using namespace std;
// S_n(x) = sum_{i=0}^n x^i/i
double sum_exp(double x, int n) {
	double Sn = 0, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		Sn += y/i;
	}
	return Sn;
}
// E_n(x) = sum_{i=0}^n (-1)^{i-1}*x^i/i
double sum_exp_minus(double x, int n) {
	double En = 0, y = -1;
	x = -x;
	for (int i = 1; i <= n; ++i) {
		y *= x;
		En += y/i;
	}
	return En;
}
// Exp_n(x) = sum_{i=0}^n x^i/i!
double Exp(double x, int n) {
	double Expn = 1, y = 1;
	for (int i = 1; i <= n; ++i) {
		y *= x/i;
		Expn += y;
	}
	return Expn;
}

int main() {
	double x; int n;
	cout << "Input x: ";
	cin >> x;
	cout << "Input n: ";
	cin >> n;
	double Sn = sum_exp(x, n);
	cout << "S(" << x << ", " << n << ") = " << Sn << ".\n";
	double En = sum_exp_minus(x, n);
	cout << "E(" << x << ", " << n << ") = " << En << ".\n";
	En = -sum_exp(-x, n);
	cout << "E(" << x << ", " << n << ") = " << En << ".\n";
	double Kn = Exp(-x, n); // K_n(x) = sum_{i=0}^n (-1)^i*x^i/i!
	cout << "K(" << x << ", " << n << ") = " << Kn << ".\n";
}