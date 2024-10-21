#include <iostream>
using namespace std;

int main() {
	int t, x, y, ans;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		ans = x - y*2;
		if (ans < 0)
			cout << -1 << '\n';
		else
			cout << ans << '\n';
	}
}