#include <iostream>
using namespace std;

int main(){
	string st;
	long count = 1, max = 1;
	cin >> st;
	if (st.length() == 0) 
		max = 0;
	for (int i = 1; i < int(st.length()); ++i) {
		if (st[i] == st[i-1])
			count += 1;
		else {
			if (count > max)
				max = count;
			count = 1;
		}
	}
	if (count > max)
		max = count;
	cout << max << '\n';
}