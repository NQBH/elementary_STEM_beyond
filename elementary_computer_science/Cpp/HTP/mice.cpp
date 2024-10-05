#include <iostream>
#include <cmath>
using namespace std;

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void sort(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

int max_time(int n, int A[], int B[]) {
	int max = abs(A[0] - B[0]);
	for (int i=1; i < n; ++i)
		if (abs(A[i] - B[i]) > max) 
			max = abs(A[i] - B[i]);
	return max;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int A[n], B[n];
		for (int i = 0; i < n; ++i)
			cin >> A[i];
		for (int i = 0; i < n; ++i)
			cin >> B[i];
		sort(A, n);
		sort(B, n);
		cout << max_time(n, A, B) << '\n';
	}
}