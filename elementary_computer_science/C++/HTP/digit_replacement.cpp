#include <iostream>
using namespace std;

string zero_to_five(string s) {
	for (int i = 0; i < s.size(); ++i)
		if (s.at(i) == '0')
			s.at(i) ='5';
	return s;
}

int main() {
	string s;
	int t;
	cin >> t;
	string outp[t];
	for (int i = 0; i < t; ++i) {
		cin >> s;
		outp[i] = zero_to_five(s);
		cout << outp[i] << '\n';
	}
}