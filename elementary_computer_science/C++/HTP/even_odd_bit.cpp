#include <iostream>
using namespace std;

int dem_bit1(int x){
	int d = 0;
	while (x) {
		d += x % 2;
		x = int(x/2);
	}
	return d;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (dem_bit1(n) % 2 == 0)
			cout << "even" << '\n';
		else
			 cout << "odd" << '\n';
	}
}
