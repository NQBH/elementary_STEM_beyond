#include <iostream>
using namespace std;
int main() {
	char ch;
	ch = 65;
	cout << "ch = " << ch << '\n';
	ch = 'A';
	cout << "ch = " << ch << '\n';
	cout << "ch = ";
	cin >> ch;
	cout << "ASCII code = " << int(ch) << '\n';
	ch -= ('a' - 'A')*(ch >= 'a' && ch <= 'z');
	cout << "Upper case: " << ch << '\n';
	return 1;
}