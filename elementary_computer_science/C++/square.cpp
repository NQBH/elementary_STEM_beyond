#include <bits/stdc++.h>
using namespace std;
#define inf 1000
int n, xmin = inf, ymin = inf, xmax = -inf, ymax = -inf;
int main() {
	freopen("square.inp", "r", stdin);
	freopen("square.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		int x, y;
		cin >> x >> y;
		xmin = min(xmin, x);
		xmax = max(xmax, x);
		ymin = min(ymin, y);
		ymax = max(ymax, y);
	}
	int c = max(xmax - xmin, ymax - ymin);
	cout << c*c;
}