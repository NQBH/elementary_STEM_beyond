#include <stdio.h>
double accumulator(double number) {
	static double sum = 0;
	sum += number;
	return sum;
}
int main() {
	double ans;
	accumulator(5);
	accumulator(2.25);
	accumulator(3.75);
	accumulator(7.5);
	ans = accumulator(0);
	printf("Result = %lf.\n", ans);
}