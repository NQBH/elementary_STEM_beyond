#include <iostream>
#include <math.h>
using namespace std;

int sqr(int x)
{
	return x*x;
}

int kt_tam_giac(int x)
{
	x = (x*8) + 1;
	if (sqr(static_cast<int>(sqrt(x))) != x)
		return 0;
	else 
		return (sqr(x) % 2);	
}

int main()
{
	int t, n;
	cin >> t;
	int A[t];
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		A[i] = kt_tam_giac(n);
		cout << A[i] << '\n';
	}
}