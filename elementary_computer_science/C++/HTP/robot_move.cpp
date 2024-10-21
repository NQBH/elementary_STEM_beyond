#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2, ans;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	x1 = abs(x2 - x1);
	y1 = abs(y2 - y1);
	(x1 > y1) ? ans = x1 : ans = y1;
	cout << ans << '\n';
}
