#include <iostream>
#include <vector>
using namespace std;

typedef vector<double> doubles;
typedef vector<doubles> double2D;
// Initialized square matrix/nxn 2D array
void init(double2D &a, int n) {
	a.resize(n);
	for (int i = 0; i < int(a.size()); ++i)
		a[i].resize(n);
}
// Initialized nonsquare matrix/mxn 2D array
void init(double2D &a, int m, int n) {
	a.resize(m);
	for (int i = 0; i < int(a.size()); ++i)
		a[i].resize(n);
}

void double2D_input(double2D &a) {
	for (int i = 0; i < int(a.size()); ++i)
		for (int j = 0; j < int(a[i].size()); ++j)
			cin >> a[i][j];
}

void double2D_output(double2D &a) {
	for (int i = 0; i < int(a.size()); ++i) {
		for (int j = 0; j < int(a[i].size()); ++j)
			cout << a[i][j] << "\t";
		cout << "\n";
	}
}

int main() {
	double2D A;
	int n;
	cout << "Size of square array: ";
	cin >> n;
	if (n <= 0) {
		cout << "Invalid size!\n";
		return 0;
	}
	init(A, n);
	cout << "input its elements:\n";
	double2D_input(A);
	cout << "Elements of the square array:\n";
	double2D_output(A);
}