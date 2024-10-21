#include <iostream>
using namespace std;

long sqrt_floor(long n) {
	long sum = 1, k = 1, t;
	while (sum < n) {
		k += 2;
		sum += k;
	}
	if (sum > n)
		k -= 2;
	t = (k + 1)/2;
	return t;
}

int main() {
	long n;
	cout << "Input n = ";
	cin >> n;
	long t = sqrt_floor(n);
	cout << "floor(sqrt(" << n << ")) = " << t << ".\n";
}