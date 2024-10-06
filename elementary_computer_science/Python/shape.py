m, n = map(int, input().split())
ans = 0
while m*n != 0:
	ans += m // n
	m, n = n, m % n
print(ans)