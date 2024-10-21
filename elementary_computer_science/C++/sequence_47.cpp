#include <iostream>
using namespace std;

int sequence_47(int n) {
	if (n == 1)
		return 4;
	if (n == 2)
		return 7;
	if (n % 2 != 0)
		return 10*sequence_47(n / 2) + 4;
	else
		return 10*sequence_47(n / 2 - 1) + 7;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << sequence_47(n) << '\n';
	}
}