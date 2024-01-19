#include <iostream>
#define N 1000
using namespace std;
int n, s = 0, a[N];
int find_pos() {
	if (s % 2 == 1) return 0;
	int t = 0;
	for (int i = 1; i <= n; ++i) {
		t += a[i];
		if (2*t == s) return i;
	}
	return 0;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		s += a[i];
	}
	cout << find_pos();
}