#include <iostream>
using namespace std;
int main() {
	float sum = 0, x = 1;
	while (x > 0) {
		cout << "Input a positive number: ";
		cin >> x;
		if (x > 0)
			sum += x;
	}
	cout << "Sum all positive numbers input = " << sum << ".\n";
	sum = 0;
	do {
		cout << "Input a positive number: ";
		cin >> x;
		if (x > 0)
			sum += x;
	} while (x > 0);
	cout << "Sum all positive numbers input = " << sum << ".\n";
}