#include <iostream>
using namespace std;

int main() {
	int t, n, x, y, ans;
	cin >> t;
	while (t--) {
		cin >> x >> y >> n;
		((x + x*(n % 2)) > y)? ans = int((x + x*(n % 2))/y) : ans = int(y/(x + x*(n % 2)));
		cout << ans << '\n';
	}
}