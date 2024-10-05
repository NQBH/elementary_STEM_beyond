#include <cmath>
#include <iostream>
using namespace std;
#define E 2.71828
#define Ce 0.577216
#define PI 3.14159
#define Delta(a, b, c) ( (b)*(b) - 4*(a)*(c) )
#define ABS(x) ( (x > 0)?(x): -(x) )
#define Lamda(x) (!(!(x))) // Lamda (x) ( ( (x) != 0)?1 : 0)
#define Max(x, y) ( ( (x) > (y) )? (x) : (y))
#define Min(x, y) ( ( (x) < (y) )? (x) : (y))
#define Sign(x) ( ( (x) > 0 )? 1: ( ( (x) < 0)? -1 : 0) )
int main() {
	cout << E << ".\n";
	cout << Ce << ".\n";
	cout << PI << ".\n";
	cout << Delta(1, 2, 3) << ".\n";
	cout << ABS(-1.5) << ".\n";
	cout << Lamda(1) << ".\n";
	cout << Max(1, 2) << ".\n";
	cout << Min(1, 2) << ".\n";
	cout << Sign(-1) << ".\n";
}