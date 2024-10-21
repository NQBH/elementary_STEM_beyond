#include <iostream>
using namespace std;
double accumulator(double number) {
	static double sum = 0;
	sum += number;
	return sum;
}
int main() {
	accumulator(5);
	accumulator(2.25);
	accumulator(3.75);
	accumulator(7.5);
	double ans = accumulator(0);
	cout<< "Result = " << ans << ".\n";
}