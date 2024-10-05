#include <bits/stdc++.h>
using namespace std;
void search(int k) {
	if (k == n + 1) {
		// process subset
	} else {
		// include k in the subset
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
		// don't include k in the subset
		search(k + 1);
	}
}
// Unfished
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> subset;
}