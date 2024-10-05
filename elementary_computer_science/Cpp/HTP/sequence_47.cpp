#include <iostream>
using namespace std;

void nth_infi(int n) {
	int A[10000];
	A[0] = 4;
	int x = 1, t = 0;
	n -= 1;
	while (n--) {
		t = 1;
		for (int i = 0; i < x; ++i) 
			if (t == 1) {
				if (A[i] == 4) {
					A[i] = 7;
					t = 0;
				}
				else if (i == x - 1) {
					A[i] = 4;
					A[x] = 4;
					x += 1;
					t = 0;
				}
				else 
					A[i] = 4;
			}
	}
	for (int i = x - 1; i >= 0; --i)
		cout << A[i];
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		nth_infi(n);
		cout << '\n';
	}
}

