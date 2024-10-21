#include <iostream>
using namespace std;

int gcd(int a, int b) { 
	int r, prod = a*b;
	while (a % b) {
		r = a % b;
		a = b;
		b = r;
	}
	return int(prod / b);
}

int main() {
	int t, l, r, a, b, ans;
	cin >> t;
	while (t--) {
		cin >> l >> r >> a >> b;
		ans = int(r / a) + int(r / b) + int (l / gcd(a, b)) - int(l / a) - int(l / b) - int(r / gcd(a, b));
		cout << ans << '\n';
	}
}