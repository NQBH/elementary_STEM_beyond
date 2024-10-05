#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n < m)
			cout << -1 << '\n';
		else {
			int tmp1 = int(n / 2) + n % 2, tmp2;
			(tmp1 % m == 0) ? tmp2 = 0 : tmp2 = 1;
			cout << (int(tmp1 / m) + tmp2)*m << '\n';
		}
	}
}