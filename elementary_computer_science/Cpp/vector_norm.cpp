#include <iostream>
#include <cmath>
using namespace std;
double norm(double x);
double norm(double x, double y);
double norm(double x, double y, double z);

double norm(double x) {
	return fabs(x);
}

double norm(double x, double y) {
	return sqrt(x*x + y*y);
}

double norm(double x, double y, double z) {
	return sqrt(x*x + y*y + z*z);
}

int main() {
	double x, y, z;
	cin >> x >> y >> z;
	cout << "|(x)| = " << norm(x) << ".\n";
	cout << "||(x,y)|| = " << norm(x, y) << ".\n";
	cout << "||(x,y,z)|| = " << norm(x, y, z) << ".\n";
}