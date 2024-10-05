#include <iostream>
using namespace std;

int main() {
	int n, count2, max3, count1 = 0, solution, tmp;
	cin >> n;
	int a[n];
	for (int i=0; i<n; ++i)
		cin >> a[i];
	(a[0] == 1)? solution =0 : solution = 1;
	for (int i=0; i<n; ++i) {
		if (a[i] == 1){
			count2 = 0;	
			tmp = 0;
			for (int j=i+1; j<n; ++j)
				if (a[i] == 2) 
					count2 += 1;
				else if (a[i] == 3)
					solution += count2 + 1;
		}
		count1 += 1;
	}
	solution += count1 - 1;
	cout << solution;
}