#include <iostream>
#define N int(1e6)
using namespace std;
int p[N+3];
void sieve() {
	fill(p + 2, p + N + 1, 1);
	for (int i = 2; i*i <= N; ++i)
		if (p[i] == 1)
			for (int j = i*i; j <= N; j += i) p[j] = 0;
}

int sum_digit(int x) {
	int s = 0;
	while (x > 0) {
		 s += x % 10;
		 x /= 10;
	}
	return s;
}

int main() {
	sieve();
	int h, n, cnt = 0;
	cin >> n >> h;
	for (int i = 2; i <= n; ++i)
		if (p[i] == 1 && sum_digit(i) == h) {
			cout << i << '\n';
			++cnt;
		}
	cout << cnt;
}