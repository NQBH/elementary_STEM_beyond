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
			int c = 0;
			while (2*c < n)
				c += m;
			cout << c << '\n';
		}
	}
}