#include <iostream>
#include <cmath>
using namespace std;
double round(double x); // Declare function round()
void round(double& x, int n); // Declare function round() with n-digit precision

double round(double x) {
	double ans;
	if (x >= 0)
		ans = floor(x + 0.5);
	else
		ans = -floor(-x + 0.5);
	return ans;
}

void round(double& x, int n) {
	double scale = pow(10, n);
	x *= scale;
	if (x >= 0)
		x = floor(x + 0.5)/scale;
	else
		x = -floor(-x + 0.5)/scale;
}

int main() {
	double a; int n;
	cout << "Input a = ";
	cin >> a;
	cout << "Round to n = ";
	cin >> n;
	cout << "round(" << a << ") = " << round(a) << ".\n";
	cout << "round(" << a << "," << n << ") = ";
	round(a, n);
	cout << a << ".\n";
	a = -2.81828;
	cout << "a (old) = " << a << ".\n";
	round(a, 4);
	cout << "a (rounded) = " << a << ".\n";
}