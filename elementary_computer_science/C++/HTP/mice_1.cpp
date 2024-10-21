#include <iostream>
#include <cmath>
using namespace std;

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n], b[n];
		for (i = 0; i < n; ++i)
			cin >> a[i];
		for (i = 0; i < n; ++i)
			cin >> b[i];
		for (i = 0; i < n; ++i)
			for (int j = i + 1; j < n; ++j) {
				if (a[i] > a[j])
					swap(a[i], a[j]);
				if (b[i] > b[j])
					swap(b[i], b[j]);
			}
		int max = abs(a[0] - b[0]);
		for (i = 1; i < n; ++i)
			if (abs(a[i] - b[i]) > max) 
				max = abs(a[i] - b[i]);
		cout << max << '\n';
	}
}