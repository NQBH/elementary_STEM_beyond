#include <iostream>
using namespace std;
int Collaz(int n) {
	return (n % 2)*(3*n + 1) + (1 - n % 2)*(n/2);
}

double Abs(double a) {
	return 2*(a >= 0)*a  -a;
}

double Max(double a, double b) {
	// return (a > b)*a + (a <= b)*b;
	return (a > b)*(a - b) + b;
}

double Min(double a, double b) {
	// return (a > b)*b + (a <= b)*a;
	return (a > b)*(b - a) + a;
}

int num_day_of_month(int month, int year) {
	if (month < 1 || month > 12 || year < 0)
		return -1;
	return 28 + (month != 2)*(2 + (month < 8)*(month % 2) + (month >= 8)*(1 - month % 2))
			  + (month == 2)*((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
	double a, b; int month;
	cin >> a >> b >> month;
	double Abs = (a > 0)? a : -a;
	cout << "|a| = " << Abs << ".\n";
	double Max = (a > b)? a : b;
	cout << "max(a,b) = " << Max << ".\n";
	int num_day = (month < 8)? ((month % 2 == 1)? 31:30) : ((month % 2 == 1)? 30:31);
	cout << num_day << ".\n";
}