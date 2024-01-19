#include <iostream>
#define N 100
using namespace std;
int m, n, a[N+3][N+3], f[N+3][N+3], x[N+3][N+3], ans[N+3];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j) {
			cin >> a[i][j];
			f[i][j] = int(1e9);
		}
	for (int i = 1; i <= n; ++i) {
		f[i][1] = a[i][1];
		for (int j = 2; j <= m; ++j)
			for (int k = 0; k <= i; ++k)
				if (f[i][j] > f[k][j-1] + a[i-k][j]) {
					f[i][j] = f[k][j-1] + a[i-k][j];
					x[i][j] = k;
				}
	}
	int jmin = 1;
	for (int j = 1; j <= m; ++j)
		if (f[n][jmin] > f[n][j]) jmin = j;
	cout << f[n][jmin] << '\n';
	int i = n;
	while (i > 0) {
		ans[jmin] = i - x[i][jmin];
		i = x[i][jmin];
		--jmin;
	}
	for (int i = 1; i <= m; ++i)
		cout << ans[i] << '\n';
}