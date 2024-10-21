#include <iostream>
using namespace std;

int count_gift(int a[], int x, int k) {
	int count = 0;
	for (int i = 0; i < x - 1; ++i)
		for (int j = i + 1; j < x; ++j)
			if (a[i] + a[j] == k)
				count += 1;
	return count;
}
int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	cout << count_gift(a, n, k) << '\n';
}