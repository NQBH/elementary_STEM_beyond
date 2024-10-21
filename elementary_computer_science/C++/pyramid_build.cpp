#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	for (i = 1; n >= 0; i++)
		n -= i*(i + 1)/2;
	cout << --i;
}