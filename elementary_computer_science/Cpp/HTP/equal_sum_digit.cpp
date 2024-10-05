#include <iostream>
using namespace std;

int sum_digit(int a) {
	int sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}
int main() {
	int t, n;
	int a[36];
	for (int i=1000; i<10000; ++i) 
		a[sum_digit(i) - 1] += 1;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << a[n-1] << '\n';
	}
}