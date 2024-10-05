#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << int(n/3) + int(n/5) - int(n/15) << '\n';
	}
}