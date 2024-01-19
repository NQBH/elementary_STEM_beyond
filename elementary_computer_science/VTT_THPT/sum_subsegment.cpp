#include <iostream>
#define N 2000
using namespace std;
int n, k, a[N];
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	int lmin = n, pos = 0;
	for (int i = 1; i <= n; ++i) {
		int s = 0;
		for (int j = i; j <= n; ++j) {
			s += a[j];
			if (s == k && lmin > j - i + 1) {
				lmin = j - i + 1;
				pos = i;
			}
		}
	}
	if (pos == 0) cout << 0;
	else cout << pos << " " << lmin;
}