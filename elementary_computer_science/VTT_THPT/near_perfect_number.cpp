#include <iostream>
#define N 1000
using namespace std;
int n, s = 0, a[N];

int sum_proper_divisor(int n) {
	s = 0;
	for (int i = 1; i < n/2 + 1; ++i)
		if (n % i == 0) s += i;
	return s;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] <= sum_proper_divisor(a[i])) cout << 1;
		else cout << 0;
		cout << '\n';
	}
}