#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int count = 0;
		for (int a = 1; a < 10; ++a)
			for (int b = 0; b < 10; ++b)
				count += max(min(n - a - b, 9) - max(n - a - b - 9, 0) + 1, 0);
		cout << count << '\n';
	}
}