#include <bits/stdc++.h>
using namespace std;
int n, x, c[3];
long long res;
int main() {
	freopen("div3.inp", "r", stdin);
	freopen("div3.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x;
		++c[x % 3];
	}
	res = (c[0]*(c[0] - 1))/2 + c[1]*c[2];
	cout << res;
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall div3.cpp -o div3