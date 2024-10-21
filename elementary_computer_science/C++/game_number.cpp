#include <iostream>
using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y >> n;
		if (n % 2)
			x *= 2;
		cout << int(max(x, y) / min(x, y)) << '\n';
	}
}