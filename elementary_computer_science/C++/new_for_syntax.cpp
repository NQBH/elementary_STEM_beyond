#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int a[] = {0, 1, 2, 3, 4, 5};
	for (int x : a) // for (auto x : a)
		cout << x << ' ';
	cout << "\nInput new elements:\n";
	for (int& x : a) // for (auto& x : a) 
		cin >> x;
	cout << "Array now is: ";
	for (const int& x : a) // Redeclare base type of array a[]
		cout << x << ' ';
	cout << "\n";
	for (const auto& x : a) // Automaticaly determine type
		cout << x << ' ';
	cout << "\n";
}