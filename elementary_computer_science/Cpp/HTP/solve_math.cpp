#include <iostream>
using namespace std;

int main() {
	int t, a, b, k, count;
	int tmp[100][2];
	cin >> t;
	while (t--) {
		cin >> a >> b >> k;
		count = 0;
		for (int i = -10; i < 11; ++i) 
			if ((a*i - k)%b == 0) {
				tmp[count][0] = i;
				tmp[count][1] = (a*i - k)/b;
				count += 1;
			}
		cout << count << '\n';
		for (int i = 0; i < count; ++i)
			cout << tmp[i][0] << ' ' << tmp[i][1] << '\n';
	}
}