#include <iostream>
using namespace std;

int main() {
	int t, n;
	float x, sum;
	cin >> t;
	while (t--) {
		cin >> x;
		n = 1; sum = 1;
		while (sum < x) {
			++n;
			sum += 1.0/(2*n - 1); // (float)1/(2*n - 1);	
			cout << sum << '\n';
		}
		cout << n - 1 << '\n';
	}
}