#include <iostream>
using namespace std;

int main() {
	int t; long long a, b, x, y, z, yellow, blue, ans;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cin >> x >> y >> z;
		yellow = x*2 + y;
		blue = z*3 + y;
		if ((yellow <= a) && (blue <= b))
			ans = 0;
		else if ((yellow > a) && (blue <= b))
			ans = yellow - a;
		else if ((yellow <= a) && (blue > b))
			ans = blue - b;
		else
			ans = yellow - a + blue - b;
		cout << ans << '\n';
	}	
}