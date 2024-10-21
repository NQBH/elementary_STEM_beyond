#include <math.h>
#include <iostream>
using namespace std;
double nth_root(double x, int n, bool& error_flag) {
	double ans = 0;
	error_flag = false;
	if (n == 0)
		error_flag = true;
	else if (n < 0)
		if (x == 0)
			error_flag = true;
		else
			ans = 1/nth_root(x, -n, error_flag);
	else
		if (x >= 0)
			ans = pow(x, 1.0/n);
		else
			if (n % 2 == 1)
				ans = -nth_root(-x, n, error_flag);
			else
				error_flag = true;
	return ans;
}

int main() {
	double x; int n; bool error_flag = true;
	cin >> x >> n;
	cout << nth_root(x, n, error_flag) << ".\n";
}