#include <iostream>
#include <cmath>
using namespace std;
int is_prime(long n) {
	int prime;
	if (n < 2)
		prime = 0;
	else {
		long i = 2;
		double sqrtN = sqrt(n);
		prime = 1;
		while (i <= sqrtN) {
			if (n % i == 0) {
				prime = 0;
				break;
			}
			++i;
		}

	}
	return prime;
}
int main() {
	long n;
	cout << "Input n = ";
	cin >> n;
	cout << "isprime(" << n << ") = " << is_prime(n) << ".\n";
}