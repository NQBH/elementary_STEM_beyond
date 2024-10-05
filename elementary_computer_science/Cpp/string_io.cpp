#include <iostream>
using namespace std;
#define MAXSZ 256
#define gets_s(s,L) {fgets((s), (L) + 1, stdin); (s)[strlen(s) - 1] = 0;}
int main() {
	char str[MAXSZ + 1];
	string str1, str2, str3;
	cout << "1st string: ";
	cin.getline(str, MAXSZ);
	str1 = str;
	fflush(NULL); // _flushall();
	cout << "2nd string: ";
	cin.getline(str, MAXSZ);
	str2 = str;
	cout << "String with no blank: ";
	cin >> str;
	str3 = str;
	fflush(NULL); // _flushall();
	cout << "Our strings are:\n" << str1.c_str() << '\n' << str2.c_str() << '\n' << str3 << '\n';
	return 1;
}