#include <iostream>
using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	for (int i = 0; i < t; ++i)	{
		cin >> n;
		x = int((n - 2 + n % 2)/2);
		cout << x*(x + 1 - n % 2) << '\n';
	}
}