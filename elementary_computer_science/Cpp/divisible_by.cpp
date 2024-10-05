#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a % b == 0) cout << a << " is divisible by " << b << ".\n";
	else cout << a << " is not divisible by " << b << ".\n";
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall divisible_by.cpp -o divisible_by