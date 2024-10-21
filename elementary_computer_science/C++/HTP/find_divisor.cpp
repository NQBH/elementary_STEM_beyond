#include <iostream>
using namespace std;

int man_exp(int n, int p) {
	int exp = 0, cl_p = p;
	while (n >= cl_p) {
		exp += int(n / cl_p);
		cl_p *= p;
	}
	return exp;
}

int main() {
	int t, n, p;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n >> p;
		cout << man_exp(n, p) << '\n';
	}
}