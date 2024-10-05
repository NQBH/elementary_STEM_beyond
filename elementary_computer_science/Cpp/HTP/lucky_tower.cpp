#include <iostream>
using namespace std;

bool check_8(int x) {
	while (x != 0) 
		if (x % 10 != 8)
			x = int(x / 10) ;
		else
			return 1; 
	return 0;
}

int floors(int x) {
	int tmp = 1;
	while (check_8(x + tmp) == 0)
		tmp += 1;
	return tmp;
}

int main() {
	int a;
	cin >> a;
	cout << floors(a) << '\n';
}