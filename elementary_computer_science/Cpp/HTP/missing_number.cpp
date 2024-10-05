#include <iostream>
using namespace std;

int main(){
	long n, num;
	cin >> n;
	long long miss_num = n*(n + 1)/2;
	while (--n) {
		cin >> num;
		miss_num -= num;
	}
	cout << miss_num << '\n';
}