#include <iostream>
using namespace std;
void Swap(double& a, double& b) {
	double c = a;
	a = b;
	b = c;
}

void Swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

template <class T>
void swap(T *x, T *y) {
	T u = *x;
	*x = *y;
	*y = u;
}

void swap(auto& x, auto& y) {
	auto u = x;
	x = y;
	y = u;
}

int main() {
	float a = 186, b = 273;
	swap(&a, &b);
	printf("New values of a & b now are a = %f,  = %f.\n", a, b);
	double x = 89.51345, y = 72.89865;
	Swap(x, y);
	cout << "After swapping: x = " << x << ", y = " << y << ".\n";
	int u = 21, v = 37;
	Swap(u, v);
	cout << "After swapping: u = " << u << ", v = " << v << ".\n";
}
// g++ -std=c++20 -O2 -Wall swap.cpp -o swap
// g++ -std=c++1y -O2 -Wall swap.cpp -o swap