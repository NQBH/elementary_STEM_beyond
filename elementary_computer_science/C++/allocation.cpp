#include <bits/stdc++.h>
using namespace std;
int n, b, a[100000];

void solve() {
	cout << "Enter n: ";
	cin >>  n;
	cout << "Enter b: ";
	cin >>  b;
	cout << "Enter array a: ";
	for(int i = 0; i < n; ++i)
		cin >> a[i];
	sort(a, a + n);
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (b >= a[i]) {
			b -= a[i];
			++ ans;
		}
	}
	cout << ans << "\n";
}

int main() {
	int t, i = 1;
	cout << "Enter t: ";
	cin >> t;
	while (t--) {
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}