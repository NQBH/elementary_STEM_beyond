#include <iostream>
using namespace std;
int main() {
	long n;
	double S = 0, i;
	cout << "Input n = ";
	cin >> n;
	for (i = 1; i <= n; ++i)
		S += 1/(i*i);
	cout << "Result = " << S << ".\n";
}