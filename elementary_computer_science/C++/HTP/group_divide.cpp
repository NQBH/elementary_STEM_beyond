#include <iostream> 
using namespace std;
const int max_col = 50;
const int max_row = 50;

bool join_group(int group[], int x, int mem, int matrix[][max_col]) {
	for (int i = 0; i < x; i++)
		if (matrix[group[i]][mem] == 1)
			return 0;
	return 1;
}
int main() {
	int n, i, j;
	cin >> n;
	int group1[n], group2[n];
	int group1_count = 0, group2_count = 0;
	bool complete = 1;	
	int a[max_row][max_col];
	for (i = 0; i < n; ++i) 
		for (j = 0; j < n; ++j)
			cin >> a[i][j];
	for (i = 0; i < n; ++i)
		if (join_group(group1, group1_count, i, a)) {
			group1[group1_count] = i;
			group1_count += 1;
		}
		else if (join_group(group2, group2_count, i, a)) {
			group2[group2_count] = i;
			group2_count += 1;
		}
		else {
			complete = 0;
			break;
		}
	if (complete) {
		for (i = 0; i < group1_count; ++i)
			if (i < group1_count - 1)
				cout << ++group1[i] << ' ';
			else
				cout << ++group1[i];
		cout << '\n';
		for (i = 0; i < group2_count; ++i)
			if (i < group2_count - 1)
				cout << ++group2[i] << ' ';
			else
				cout << ++group2[i];
	}
	else 
		cout << 0;
	cout << '\n';
}