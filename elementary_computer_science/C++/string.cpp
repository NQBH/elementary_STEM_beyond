#include <string>
#include <iostream>
using namespace std;
void string_sort(int n, string str[]) {
	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j < n; ++j)
			if (str[i] > str[j]) {
				string s = str[i];
				str[i] = str[j];
				str[j] = s;
			}
}

int main() {
	string str1("012"), str2("345"), s;
	s = str1 + str2;
	cout << "Result: " << s << ".\n";
	string country[] = {"Viet nam", "Lao", "Campuchia", "Thai lan", "Mianma"};
	int n = sizeof(country)/sizeof(country[0]);
	string_sort(n, country);
	cout << "After sorting: \n";
	for (int i = 0; i < n; ++i)
		cout << "\t" << country[i] << "\n";
}