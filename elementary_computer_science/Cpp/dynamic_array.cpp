#include <iostream>
#include <vector>
using namespace std;

typedef vector<float> Floats;
typedef vector<Floats> float2D;

void arrayOutput(vector<float> &a) {
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
}

void arrayFloatOutput(const vector<float> &a) {
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << " ";
}

void arrayInput(vector<float> &a) {
	int n;
	cin >> n;
	if (n < 1) {
		return;
	}
	a.resize(n);
	for (int i = 0; i < a.size(); ++i) {
		cin >> a[i];
	}
}

void arrayFloatInput(vector<float> &a){
	float x;
	while (cin >> x) {
		a.push_back(x);
	}
}
// Make an array of ints
void intarrayMake(vector<int>& a, int elements[], int n) {
	int i = 0;
	a.resize(0);
	while (i < n) {
		a.push_back(elements[i]);
		++i;
	}
}
// Print out an array of ints
void intarrayOut(vector<int>& a, ostream& outDev) {
	for (int i = 0; i < a.size(); ++i) {
		outDev << a[i] << " ";
	}
	outDev << '\n';
}
// Concatenate arrays of ints
void intarrayCat(vector<int>& dest, vector<int>& src) {
	int size1 = dest.size(), size2 = src.size();
	int idx = size1, newsize = size1 + size2, i = 0;
	dest.resize(newsize);
	while (i < size2) {
		dest[idx] = src[i];
		++idx;
		++i;
	}
}
// Cut a part of an array of ints into another one
void intarrayCutFrom(vector<int>& a, int pos, vector<int>& b) {
	int size = a.size(), j = pos;
	if (j < 0 || j >= size)
		return;
	b.resize(0);
	while (j < size) {
		b.push_back(a[j]);
		++j;
	}
	a.resize(pos);
}
// Insert element into an array
void intarrayInsert(vector<int>& a, int pos, int element) {
	if (pos < 0 || pos >= a.size()) {
		return;
	}
	vector<int> b;
	intarrayCutFrom(a, pos, b);
	a.push_back(element);
	intarrayCat(a, b);
}
// Make an array of class T
template <class T>
void intarrayMake(vector<T>& a, T elements[], int n) {
	int i = 0;
	a.resize(0);
	while (i < n) {
		a.push_back(elements[i]);
		++i;
	}
}
// Print out an array of class T
template <class T>
void intarrayOut(vector<T>& a, ostream& outDev) {
	for (int i = 0; i < a.size(); ++i) {
		outDev << a[i] << " ";
	}
	outDev << '\n';
}
// Concatenate arrays of template T
template <class T>
void intarrayCat(vector<T>& dest, vector<T>& src) {
	int size1 = dest.size(), size2 = src.size();
	int idx = size1, newsize = size1 + size2, i = 0;
	dest.resize(newsize);
	while (i < size2) {
		dest[idx] = src[i];
		++idx;
		++i;
	}
}
// Cut a part of an array of template T into another one
template <class T>
void intarrayCutFrom(vector<T>& a, int pos, vector<T>& b) {
	int size = a.size(), j = pos;
	if (j < 0 || j >= size)
		return;
	b.resize(0);
	while (j < size) {
		b.push_back(a[j]);
		++j;
	}
	a.resize(pos);
}

void float2DInit(float2D &a, int n) {
	a.resize(n);
	for (int i = 0; i < a.size(); ++i)
		a[i].resize(n);
}

void float2D_In(float2D &a) {
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < a[i].size(); ++j) {
			cin >> a[i][j];
		}
	}
}

void float2D_Out(float2D &a) {
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < a[i].size(); ++j) {
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
}

int main()
{
	vector<float> a, b;
	// Array with a known size
	cout << "Input an array, 1st is the number of elements: ";
	arrayInput(a);
	cout << "Element(s) in the array: ";
	arrayOutput(a);
	cout << '\n';
	// Array with an unknown size
	cout << "Input an array, press Ctrl X then Enter to stop: ";
	arrayFloatInput(b);
	cout << "Element(s) in the array: ";
	arrayFloatOutput(b);
	cout << '\n';
	// Operations on an arrays of ints
	int x[] = {3,5, 2, 4, 9, 7, 8, 6};
	int n = sizeof(x)/sizeof(x[0]);
	vector<int> A, B, c;
	intarrayMake(A, x, n);
	cout << "A: "; intarrayOut(A, cout);
	intarrayCutFrom(A, 3, B);
	cout << "A now: "; intarrayOut(A, cout);
	cout << "B: "; intarrayOut(B, cout);
	intarrayCat(B, A);
	cout << "B now: "; intarrayOut(B, cout);
	A.pop_back();
	cout << "A now: "; intarrayOut(A, cout);
	intarrayInsert(B, 3, 999);
	cout << "B now: "; intarrayOut(B, cout); 
	// 2D dynamic array
	float2D A2D; int N;
	cout << "Size of square array/matrix: ";
	cin >> N;
	if (N <= 0) {
		cout << "Invalid size ...\n";
		return 1; 
	}
	float2DInit(A2D, N);
	cout << "Input elements of square array:\n";
	float2D_In(A2D);
	cout << "Elements of square array:\n";
	float2D_Out(A2D);
	return 0;
}