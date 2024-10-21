#include <iostream>
using namespace std;

void sum_product_1(long n, long& S, long& P) {
	S = 0; P = 1;
	for (int i = 1; i < n; ++i) {
		S += i;
		P *= i;
	}
}

void sum_product_2(long n, long& S, long& P) {
	S = 0; P = 1;
	for(; n >= 1; --n) {
		S += n;
		P *= n;
	}
}

int main() {
	long n, sum = 0, k = 1;
	cout << "Input n = ";
	cin >> n;
	sum = 0, k = 1;
	while (sum + k <= n) {
		sum += k;
		++k;
	}
	--k;
	/* // do while option
	do {
		sum += k;
		++k;
	} while (sum < n);
	if (sum > n) {
		sum -= k;
		--k
	}
	*/	
	cout << "k = " << k << ".\n";
	cout << "Sum of 1st k positive integers = " << sum << ".\n";
	if (sum == n)
		cout << n << " is the sum of 1st k positive integers.\n";
	else
		cout << n << " is not the sum of 1st k positive integers.\n";
}