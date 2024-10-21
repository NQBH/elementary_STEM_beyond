#include <iostream>
using namespace std;

bool palindrome(string s) {
	for (int i = 0; i < int(s.length()/2); ++i)
		if (s[i] != s[s.length() - i - 1])
			return 0;
	return 1;
}

string num_str(string s) {
	string ans = "";
	int tmp;
	for (int i=0; i < s.length(); ++i){
		tmp = 1;
		if (s[i] >= 'S')
			tmp -= 1;
		if (s[i] == 'Z') 
			tmp -=1;
		ans += static_cast<char>(int((s[i] + tmp) / 3) + 28) ;
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << palindrome(num_str(s)) << '\n';
	}
}