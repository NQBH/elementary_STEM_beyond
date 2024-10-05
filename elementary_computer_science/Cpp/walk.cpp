#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n < m)
			cout << -1 << '\n';
		else
			cout << int((int((n + 1) / 2) + m - 1) / m)*m << '\n';
	}
}