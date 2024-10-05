#include <iostream>
using namespace std;

int main() {
	int n, x, max;
	cin >> n;
	cin >> max;
	n -= 1;
	while (n--) {
		cin >> x;
		if (x > max) 
			max = x;
	}
	cout << max;
}