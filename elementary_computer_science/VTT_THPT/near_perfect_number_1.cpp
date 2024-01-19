#include <iostream>
#define N int(1e6)
using namespace std;
int n, c[N + 3];

void init() {
	fill(c + 1, c + N + 1, 1);
	for (int i = 2; i*i <= N; ++i)
		for (int j = i*i; j <= N; j += i) {
			c[j] += i;
			if (i*i != j) c[j] += j/i;
		}
}

int main() {
	init();
	cin >> n;
	for (int x, i = 1; i <= n; ++i) {
		cin >> x;
		if (c[x] >= x) cout << 1 << '\n';
		else cout << 0 << '\n';
	}
}