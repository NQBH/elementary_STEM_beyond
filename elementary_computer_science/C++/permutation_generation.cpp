#include <bits/stdc++.h>
using namespace std;

void search() {
	if (permutation.size() == n) {
		// prcess permutation
	} else {
		for (int i = 1; i <= n; ++i) {
			if (chosen[i]) continue;
			chosen[i] = true;
			permutation.push_back(i);
			search();
			chosen[i] = false;
			permutation.pop_back();
		}
	}
}
// Unfished
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> permutation;
	bool chosen[n+1];

	for (int i = 1; i <= n; ++i) {
		permutation.push_back(i);
	}
	do {
		// process permutation
	} while (next_permutation(permutation.begin(), permutation.end()));
}
// Compile in Terminal:
// g++ -std=c++11 -O2 -Wall permutation_generation.cpp -o permutation_generation