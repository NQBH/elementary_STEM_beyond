#include <bits/stdc++.h>
using namespace std;
// bool is_open(file*);

bool nonzero(int i) {
	bool b {i != 0};
	return b;
}
// Compare 2 integers
bool equal(int a, int b) {
	bool b1 {a == b};
	return b1;
}

bool greater(int a, int b) {
	return a > b;
}
// Compare 2 reals
bool greater(double a, double b) {
	return a > b;
}
// A pointer can be implicitly converted to a bool. A non-null pointer converts to true; pointers with value nullptr convert to false
void pointer_bool_converter(int* p) {
	bool b = p; // narrows to true or false
	bool b2 {p != nullptr}; // explicit test against nullptr
	if (p) { // equivalent to p != nullptr
		// ...
	}
}
// Integer value of any character input from keyboard
void intval() {
	for (char c; cin >> c;)
		cout << "the value of '" << c << "' is " << int(c) << '\n';
}

int main(){
	intval();
	return 0;
}
// Terminal: g++ -std=c++11 -O2 -Wall collection.cpp -o collection