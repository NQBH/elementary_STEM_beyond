#include <iostream>
#include <vector>
using namespace std;

int* array_input(int& n) {
	int *a = NULL; // a will keep address of beginning of array
	while (1) {
		cout << "Number of elements will be used: ";
		cin >> n;
		if (n < 0)
			cout << "Wrong input, reinput:\n";
		else
			break;
	}
	a = new int[n]; // Inquire n elements of int type
	if (a == NULL) { // Cannot provide dynamic memory
		n = 0;
		return NULL;
	}
	for (int i = 0; i < n; ++i) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	return a;
}

void array_output(int a[], int n) {
	cout << "a[]:";
	for (int i = 0; i < n; ++i)
		cout << " " << a[i];
	cout << ".\n";
}

void array_input_auto(vector<auto> &a) {
	int n = 0;
	while (1) {
		cout << "n element(s), input n = ";
		cin >> n;
		if (n < 0)
			cout << "Error, try again!\n";
		else
			break;
	}
	a.resize(n);
	for (int i = 0; i < n; ++i) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void array_output_auto(vector<auto> &a) {
	cout << "a[]: ";
	for (int i = 0; i < int(a.size()); ++i)
		cout << " " << a[i];
	cout << ".\n";
}

void array_double_input(vector<double> &a) {
	double x;
	while (cin >> x) // Press Crl X when user wants to stop
		a.push_back(x);
}

void array_double_output(const vector<double> &a) {
	cout << "a[]: ";
	for (int i = 0; i < int(a.size()); ++i)
		cout << " " << a[i];
	cout << ".\n";
}

int main() {
	int n;
	int* a = array_input(n);
	if (n > 0) {
		array_output(a, n);
		delete[] a; // Free memory
	}
	vector<double> b, c;
	array_input_auto(b);
	array_output_auto(b);
	cout << "Input c[], press Ctrl X then Enter to stop:\n";
	array_double_input(c);
	cout << "Element(s) in the array: ";
	array_double_output(c);
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -std=c++20 -Wall -O2 dynamic_1D_array.cpp -o dynamic_1D_array
dynamic_1D_array.cpp: In instantiation of ‘void array_output_auto(std::vector<auto:11>&) [with auto:12 = double]’:
dynamic_1D_array.cpp:67:19:   required from here
dynamic_1D_array.cpp:53:27: warning: comparison of integer expressions of different signedness: ‘int’ and ‘std::vector<double>::size_type’ {aka ‘long unsigned int’} [-Wsign-compare]
   53 |         for (int i = 0; i < a.size(); ++i)
      |                         ~~^~~~~~~~~~
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ ./dynamic_1D_array
*/