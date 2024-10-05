#include <iostream>
#include <cmath>
using namespace std;
const auto epsilon = 0.000000001; // tolerance 10^{-9}

double func1(double x) {
	return pow(x, 5) + 7*x + 1; // Function x^5 + 7x + 1
}

double func2(double x) {
	return 2*pow(x, 11) + 17*pow(x, 5) + 1; // Function 2x^11 + 17x^5 + 1
}

auto solve(auto F(double x), auto a, auto b) { // auto solve(auto F(auto x), auto a, auto b) {
	auto left = a, right = b;
	while (fabs(right - left) > epsilon) {
		auto mid = (left + right)/2;
		if (F(left)*F(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	return (left + right)/2;
}

int main() {
	double x1, x2;
	x1 = solve(func1, -1.0, 0.0);
	cout << "1st equation, x1 = " << x1 << ".\n";
	cout << "Value of  func1(x1) = " << func1(x1) << ".\n";
	x2 = solve(func2, -1.0, 0.0);
	cout << "2nd equation, x2 = " << x2 << ".\n";
	cout << "Value of  func2(x2) = " << func2(x2) << ".\n";
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -std=c++20 -O2 -Wall polynomial_eqn_bisection.cpp -o polynomial_eqn_bisection
polynomial_eqn_bisection.cpp:14:19: error: ‘auto’ parameter not permitted in this context
   14 | auto solve(auto F(auto x), auto a, auto b) {
      |                   ^~~~
polynomial_eqn_bisection.cpp: In function ‘int main()’:
polynomial_eqn_bisection.cpp:28:20: error: invalid conversion from ‘double (*)(double)’ to ‘double (*)(...)’ [-fpermissive]
   28 |         x1 = solve(func1, -1.0, 0.0);
      |                    ^~~~~
      |                    |
      |                    double (*)(double)
polynomial_eqn_bisection.cpp:14:17: note:   initializing argument 1 of ‘auto solve(auto:11 (*)(...), auto:12, auto:13) [with auto:11 = double; auto:12 = double; auto:13 = double]’
   14 | auto solve(auto F(auto x), auto a, auto b) {
      |            ~~~~~^~~~~~~~~
polynomial_eqn_bisection.cpp:31:20: error: invalid conversion from ‘double (*)(double)’ to ‘double (*)(...)’ [-fpermissive]
   31 |         x2 = solve(func2, -1.0, 0.0);
      |                    ^~~~~
      |                    |
      |                    double (*)(double)
polynomial_eqn_bisection.cpp:14:17: note:   initializing argument 1 of ‘auto solve(auto:11 (*)(...), auto:12, auto:13) [with auto:11 = double; auto:12 = double; auto:13 = double]’
   14 | auto solve(auto F(auto x), auto a, auto b) {
      |            ~~~~~^~~~~~~~~
*/