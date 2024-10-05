#include <iostream>
using namespace std;

void swap(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp; 
}

void sort(int a[], int n){
	int min;
	for (int i = 0; i < n - 1; ++i){
		min = i;
		for (int j = i + 1; j < n; ++j)
			if (a[min] > a[j])
				min = j;
		swap(a[min], a[i]);
	}
}

int calc_time(int a[], int k, int n) {
	int time = a[0];
	for (int i = 1; i < k; ++i)
		time = max(time, int((a[i] - a[i-1] + 2) / 2));
	return time = max(time, n + 1 - a[k-1]);
}

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a[k];
		for (int i = 0; i < k; ++i)
			cin >> a[i];
		sort(a, k);
		cout << calc_time(a, k, n) << '\n';
	}
}