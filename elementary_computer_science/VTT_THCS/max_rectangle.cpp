#include <iostream>
#include <cmath>
using namespace std;
int R, ans = 0;

int main() {
	cin >> R;
	for (int i = 1; i < R; ++i) ans = max(ans, 4*i*int(sqrt(R*R - i*i)));
	cout << ans;
}
