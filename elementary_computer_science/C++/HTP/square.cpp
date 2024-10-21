#include <iostream>
using namespace std;

int main() {
	int n, x, y, min_h = 100, max_h = 1, min_len = 100, max_len = 1;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (x < min_len) min_len = x;
		if (x > max_len) max_len = x;
		if (y < min_h) min_h = y;
		if (y > max_h) max_h = y;
	}
	cout << max(max_h - min_h, max_len - min_len)*max(max_h - min_h, max_len - min_len);
}