#include <iostream>
using namespace std;

int main() {
	int n, x, s = 0, s_odd = 0;
	cin >> n;
	while (n--) {
		cin >> x;
		s += x;
		if (abs(x)%2 == 1)
			s_odd += x;
	}
	cout << s << '\n' << s_odd;
}