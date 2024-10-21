#include <iostream>
using namespace std;

int Fib1(int n) {
	int a, b, c, k;
	if (n <= 1)
		return n;
	a = 0; b = 1;
	for (k = 2; k <= n; ++k) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int Fib2(int n) {
	if (n <= 1)
		return n;
	return Fib2(n - 1) + Fib2(n - 2);
}

int main() {
	int n;
	cin >> n;
	cout << "F_n = " << Fib1(n) << ".\n";
	cout << "F_n = " << Fib2(n) << ".\n";
}