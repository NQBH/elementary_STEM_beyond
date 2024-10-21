#include <iostream>
using namespace std;
int dx = 7;
int main() {
	cout << "dx (global) = " << dx << ".\n";
	{
		int dx = 9;
		cout << "dx (local/sub block) = " << dx << ".\n";
		cout << "dx (global) in sub block = " << ::dx << ".\n";
		::dx = 12;
	}
	cout << "dx (global) is changed = " << dx << ".\n";
}