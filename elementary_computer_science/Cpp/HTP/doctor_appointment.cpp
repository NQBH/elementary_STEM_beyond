#include <iostream>
using namespace std;

int main() {
	int t, n ,x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		if (x >= 10)
			cout << 0 << '\n';
		else
			cout << (10 - x)*(n - 1)<< '\n';
	}
}