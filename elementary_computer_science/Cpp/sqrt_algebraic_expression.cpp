#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double x, y, Fxy;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Fxy = x + sqrt(1 + y*y);
	cout << "Fxy = x + sqrt(1 + y*y) = " << Fxy << '\n';
	return 1;
}