#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	int A[t];
	for (int i = 0; i < t; ++i)	{
		cin >> n;
		A[i] = 7 - n;
		cout << A[i] << '\n';
	}
}