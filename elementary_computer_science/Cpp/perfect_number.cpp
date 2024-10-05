#include <iostream>
using namespace std;

long sum_divisor(long n) {
	long S = 0, k = n;
	if (n <= 0)
		return -1;
	while (--k)
		if (n % k == 0)
			S += k;
	return S;
}

int is_perfect(long n) {
	return (n == sum_divisor(n));
}

int main() {
	long n;
	cout << "Input n: ";
	cin >> n;
	while (n--)
		if (is_perfect(n))
			cout << n << "\n";
}