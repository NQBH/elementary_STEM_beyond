#include <bits/stdc++.h>
using namespace std;

void search(int y) {
	int (y == n) {
		++count;
		return;
	}
	for (int x = 0; x < n; ++x) {
		if (col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
		search(y + 1);
		col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
	}
}
// Unfinished
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

}
// Compile in Terminal:
// g++ -std=c++11 -O2 -Wall chessboard_queen.cpp -o chessboard_queen