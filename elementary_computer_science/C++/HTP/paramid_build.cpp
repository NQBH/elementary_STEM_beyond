#include <iostream>
using namespace std;

int count_floors(int a) {
	int cube = 1, count;
	for (count = 1; cube <= a; ++count) 
		cube += count*(count+1)/2;
	return count - 1;
}
int main(){
	int n;
	cin >> n;
	cout << count_floors(n) << '\n';
}