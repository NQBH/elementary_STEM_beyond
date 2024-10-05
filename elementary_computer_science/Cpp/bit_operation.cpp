#include <iostream>
using namespace std;
int main() {
	// unsigned char a = 45, b = 58, n = 4;
	int a, b, n, ans;
	cin >> a >> b >> n;
	ans = a & b;
	cout << a << " & " << b << " = " << int(ans) << '.' << '\n';
	ans = a | b;
	cout << a << " | " << b << " = " << int(ans) << '.' << '\n';
	ans = a ^ b;
	cout << a << " ^ " << b << " = " << int(ans) << '.' << '\n';
	ans = ~a;
	cout << "~" << a << " = " << int(ans) << '.' << '\n';
	ans = a << n;
	cout << a << " << " << n << " = " << int(ans) << '.' << '\n';
	ans = a >> n;
	cout << a << " >> " << n << " = " << int(ans) << '.' << '\n';
}