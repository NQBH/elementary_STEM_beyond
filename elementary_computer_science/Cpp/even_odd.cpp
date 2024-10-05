#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	// 1st solution
	if (n % 2 == 0) cout << n << " is even.\n";
	else cout << n << " is odd.\n";
	// 2nd solution
	(n % 2 == 0) ? cout << n << " is even.\n" : cout << n << " is odd.\n";
	// 3rd solution using bitwise AND
	if ((n & 1) == 0) cout << n << " is even.\n";
	else cout << n << " is odd.\n";
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall even_odd.cpp -o even_odd