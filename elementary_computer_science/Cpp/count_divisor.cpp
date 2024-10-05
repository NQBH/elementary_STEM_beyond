#include <iostream>
using namespace std;

long count_divisor(long n) {
	long count = 0;
	for (long i = 1; i <= n; ++i)
		if (n % i == 0)
			++count;
	return count;
}

int main() {
	long n;
	cout << "Input n: ";
	cin >> n;
	long count = count_divisor(n);
	cout << "Number of divisor of " << n << " is " << count << ".\n";
	if (count == 2)
		cout << n << " is prime.\n";
	else
		cout << n << " is composite.\n";
}