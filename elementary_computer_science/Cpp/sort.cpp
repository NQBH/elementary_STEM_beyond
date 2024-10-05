#include <iostream>
using namespace std;

void swap(auto& a, auto& b) {
	auto c = a;
	a = b;
	b = c;
}

void sort(auto a[], int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
// Bubble Sort
void bubble_sort(auto a[], int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n - 1; ++j) {
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
			}
		}
	}
}

int main() {
	double a[] = {19.7, 8.69, -12.45, -3.125, 4.889, 17.1125};
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, n);
	cout << "After sorting: ";
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
	cout << '\n';
	/*
	// C++'s sort efficiently sort elements of a vector in increasing order
	vector<int> v = {4,2,5,3,5,8,3};
	sort(v.begin(), v.end());
	// C++'s sort sorts decreasingly
	sort(v.rbegin(), v.rend());
	// Sort an ordinary array
	int A[] = {4,2,5,3,5,8,3};
	sort(A.begin(), A.end()) // sort(a, a + n); // original
	// Sort a string
	string S = "monkey";
	sort(S.begin(), S.end());
	*/
}
// g++ -std=c++20 -O2 -Wall sort.cpp -o sort
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -O2 -Wall sort.cpp -o sort
sort.cpp:4:11: warning: use of ‘auto’ in parameter declaration only available with ‘-std=c++20’ or ‘-fconcepts’
    4 | void swap(auto& a, auto& b) {
      |           ^~~~
sort.cpp:4:20: warning: use of ‘auto’ in parameter declaration only available with ‘-std=c++20’ or ‘-fconcepts’
    4 | void swap(auto& a, auto& b) {
      |                    ^~~~
sort.cpp:10:11: warning: use of ‘auto’ in parameter declaration only available with ‘-std=c++20’ or ‘-fconcepts’
   10 | void sort(auto a[], int n) {
      |           ^~~~
sort.cpp:20:18: warning: use of ‘auto’ in parameter declaration only available with ‘-std=c++20’ or ‘-fconcepts’
   20 | void bubble_sort(auto a[], int n) {
      |                  ^~~~
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -std=c++20 -O2 -Wall sort.cpp -o sort
*/