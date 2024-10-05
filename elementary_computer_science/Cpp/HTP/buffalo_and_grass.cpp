#include <iostream>
using namespace std;

int main() {
	int t, x, y, count;
	int a[100][3];
	cin >> t;
	while (t--) {
		cin >> x >> y;
		count = 0;
		for (int i = 0; i <= y/5; ++i)
			for (int j = 0; j <= (y-i*5)/3; ++j)
			if (y*3 - i*14 - j*8 == x) {
				a[count][0] = i;
				a[count][1] = j;
				a[count][2] = y*3 - i*15 - j*9;
				count += 1;
			}
		cout << count << '\n';
		for (int i = 0; i < count; ++i)
			cout << a[i][0] << ' ' << a[i][1] << ' ' << a[i][2] << '\n';
	}
}