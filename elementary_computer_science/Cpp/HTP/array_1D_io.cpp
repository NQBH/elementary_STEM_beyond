#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	cout << '\n' ;
	for (int i = 0; i < n; ++i)
	{
		cout << A[i] << " ";
	}
}
