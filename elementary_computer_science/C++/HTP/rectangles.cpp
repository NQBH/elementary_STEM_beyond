#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if ((n%2 != 0) || (n < 4))
			cout << -1 << '\n';
		else {
			for (int i = 1; i <= int(n/4); ++i)
				cout << i*(n/2 - i) << ' ';
			cout << '\n';
		}
	}
}