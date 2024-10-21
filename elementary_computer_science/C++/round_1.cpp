#include <iostream>
#include <cmath>
using namespace std;
double round(double x, int n=0); // Parameter n is 0 by default
double round(double x, int n) {
	double ans, scale = pow(10, n);
	x *= scale;
	if (x >= 0)
		ans = floor(x + 0.5)/scale;
	else
		ans = -floor(-x + 0.5)/scale;
	return ans;
}

int main() {
	double x = 2.71828;
	double y = round(x);
	cout << "round(x) = " << y << ".\n";
	double z = round(x, 2);
	cout << "round(x, 2) = " << z << ".\n";
}
/*
nqbh@nqbh-msi:~/hobby/elementary_computer_science/Cpp$ g++ -O2 -Wall round_1.cpp -o round_1
round_1.cpp: In function ‘int main()’:
round_1.cpp:17:25: error: call of overloaded ‘round(double&)’ is ambiguous
   17 |         double y = round(x);
      |                    ~~~~~^~~
In file included from /usr/include/features.h:487,
                 from /usr/include/x86_64-linux-gnu/c++/12/bits/os_defines.h:39,
                 from /usr/include/x86_64-linux-gnu/c++/12/bits/c++config.h:655,
                 from /usr/include/c++/12/iostream:38,
                 from round_1.cpp:1:
/usr/include/x86_64-linux-gnu/bits/mathcalls.h:301:1: note: candidate: ‘double round(double)’
  301 | __MATHCALLX (round,, (_Mdouble_ __x), (__const__));
      | ^~~~~~~~~~~
round_1.cpp:5:8: note: candidate: ‘double round(double, int)’
    5 | double round(double x, int n) {
      |        ^~~~~
In file included from round_1.cpp:2:
/usr/include/c++/12/cmath:1760:3: note: candidate: ‘constexpr long double std::round(long double)’
 1760 |   round(long double __x)
      |   ^~~~~
/usr/include/c++/12/cmath:1756:3: note: candidate: ‘constexpr float std::round(float)’
 1756 |   round(float __x)
      |   ^~~~~
*/