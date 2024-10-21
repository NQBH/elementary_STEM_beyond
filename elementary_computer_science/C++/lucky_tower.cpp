#include <iostream>
using namespace std;

bool is_lucky(long long n) {
	n = abs(n);
	while (n) {
		if (n % 10 == 8)
			return 1;
		n = int(n / 10);
	}
	return 0;
}

int main() {
	long long a; char b = 1;
	cin >> a;
	while (is_lucky(++a) == 0) ++b;
	cout << int(b) <<'\n';
}