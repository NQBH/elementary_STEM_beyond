#include <iostream>
using namespace std;
int main() {
	long n;
	cout << "Input n: ";
	cin >> n;
	double S = 0, P = 1; long m = n;
	for (; m >= 1; --m) {
		if (m % 4 == 1)
			S += m/(double)(1 + m*m);
		if (m % 2 == 1 && m % 3 == 1)
			P *= m;
	}
	cout << "S = " << S << ".\n";
	cout << "P = " << P << ".\n";
}