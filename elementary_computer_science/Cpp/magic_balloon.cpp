#include <iostream>
using namespace std;

int main() {
	int t; long long a, b, x, y, z;
	cin >> t;
	while (t--) {
		cin >> a >> b >> x >> y >> z;
		cout << max(0LL, 2*x + y - a) + max(0LL, 3*z + y - b) << '\n';
	}
}