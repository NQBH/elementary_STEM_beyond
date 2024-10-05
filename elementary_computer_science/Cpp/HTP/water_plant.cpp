#include <iostream>
using namespace std;

void swap(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp; 
}

void sort(int a[], int x){
	int min;
	for (int i = 0; i < x - 1; ++i){
		min = i;
		for (int j = i + 1; j < x; ++j)
			if (a[min] > a[j])
				min = j;
		swap(a[min], a[i]);
	}
}

int calc_time(int a[], int x, int row) {
	int tmp, time = a[0];
	for (int i = 1; i < x; ++i)
		if (a[i] - time + 1 > a[i-1] + time) {
			tmp = a[i] - a[i-1] - time*2 + 1;
			time += int(tmp / 2) + tmp % 2;
		}
	if (a[x-1] + time - 1 < row)
		time += row - a[x-1] - time + 1;
	return time;
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