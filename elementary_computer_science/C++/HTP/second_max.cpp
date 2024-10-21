#include <iostream>
using namespace std;

int main() {
	int n, first_max, second_max;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	first_max = max(a[0], a[1]);
	second_max = min(a[0], a[1]);
	for (int i = 2; i < n; ++i)
		if (a[i] > first_max){
			second_max = first_max;
			first_max = a[i];
		}
		else if (a[i] > second_max)
			second_max = a[i];
	cout << second_max;
}