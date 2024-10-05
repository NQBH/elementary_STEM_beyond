#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// const float Pi = 3.14159
	float R, perimeter, area;
	cin >> R;
	if (R < 0) {
		cout << "Error R < 0.\n";
		exit(0);
	}
	perimeter = 2*M_PI*R;
	area = M_PI*R*R;
	cout << "The perimeter & the area of the circle whose radius R = " << R << " are P = " << perimeter << " & S = " << area << '.' << '\n';
}
// Terminal: g++ -std=c++11 -O2 -Wall circle.cpp -o circle