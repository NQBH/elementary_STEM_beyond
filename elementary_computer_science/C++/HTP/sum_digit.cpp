#include <iostream>
using namespace std;

int sum_digit(int x) {
	int sum = 0;
	while (x > 9 || sum) {
		sum += x % 10;
		x = int(x / 10);
		if (x == 0) {
			x = sum;
			sum = 0;
		}
	}
	return x;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << sum_digit(n) << '\n';
	}
}