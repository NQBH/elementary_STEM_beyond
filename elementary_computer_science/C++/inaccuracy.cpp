#include <iostream>
using namespace std;
int main() {
	double a = 1.125, b = 1.250, c = 2.375, x = 1.123, y = 1.456, z = 2.579;
	if (a + b == c)
		cout << "a + b = c.\n";
	else {
		cout << "a + b != c.\n";
		cout << "a + b - c = " << a + b - c << '\n';
	}
	if (x + y == z)
		cout << "x + y = z.\n";
	else {
		cout << "x + y != z.\n";
		cout << "x + y - z = " << x + y - z << '\n';
	}
	return 1;
}