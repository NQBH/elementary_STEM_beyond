#include <cmath>
#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	printf("%f\n", (a*a + b*b + c*c)/(a*b*c) + sqrt(a*b*c));
	return 1;
}