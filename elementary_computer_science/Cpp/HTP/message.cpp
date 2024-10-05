#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	int A[t];
	for (int i = 0; i < t; ++i) {
		cin >> n;
		A[i] = 2*n - 2;
		cout << A[i] << '\n';
	}
}