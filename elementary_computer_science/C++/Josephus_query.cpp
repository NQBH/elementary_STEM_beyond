#include <iostream>
using namespace std;

int Josephus_query(int n, int k) {
	if (n == 1)
		return n;
	if (n % 2 == 0) {
		if (k <= n / 2)
			return 2*k;
		else
			return 2*Josephus_query(n / 2, k) - 1;
	}
	else {
		if (k <= (n - 1) / 2)
			return 2*k;
		else
			return 2*Josephus_query((n + 1) / 2, k) - 1;
	}
}

int main() {
	int q, n, k;
	cin >> q;
	while (q--) {
		cin >> n >> k;
		cout << Josephus_query(n, k) << '\n';
	}
}