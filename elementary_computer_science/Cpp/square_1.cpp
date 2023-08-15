#include <iostream>
using namespace std;
#define N 1000
int main() {
	int n, x, y, xmin = N, ymin = N, xmax = -N, ymax = -N;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x >> y;
		xmin = min(x, xmin);
		xmax = max(x, xmax);
		ymin = min(y, ymin);
		ymax = max(y, ymax);
	}
	int c = max(xmax - xmin, ymax - ymin);
	cout << c*c << '\n';
}