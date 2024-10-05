#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double sum = 0, x;
	do {
		cout << "Input a positive number = ";
		cin >> x;
		if (x <= 0)
			continue;
		sum += 1/(1 + sqrt(1 + x*x));
	} while (x != 0);
	cout << "Sum all positive numbers input = " << sum << ".\n";
}