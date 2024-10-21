#include <iostream>
using namespace std;

int is_fibonaci(int a) {
	int count, f1 = 1, f2 = 2, tmp;
	if (a == 1) {
		return 1;
	}
	for (count = 3; f2 < a; ++count) {
		tmp = f2;
		f2 += f1;
		f1 = tmp;
	}
	if (f2 == a)
		return count;
	else
		return -1;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << is_fibonaci(n) << '\n';
	}
}