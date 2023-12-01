#include <iostream>
#define N 100
using namespace std;
int l, r, ans, c[N];

int sum_digit(int n) {
	int s = 0;
	for (; n > 0; n /= 10) s += n % 10;
	return s;
}

int main() {
	cin >> l >> r;
	for (int i = l; i <= r; ++i) {
		int k = sum_digit(i);
		if (c[k] == 0) c[k] = i;
		else ans = max(ans, i - c[k]);
	}
	cout << ans;
}