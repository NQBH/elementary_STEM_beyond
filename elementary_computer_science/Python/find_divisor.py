def factorial(n):
	ans = 1
	for i in range(n):
		ans *= i + 1
	return ans
t = int(input())
for _ in range(t):
	n, p = map(int, input().split())
	n_factorial = factorial(n)
	ans = 0
	while n_factorial % p == 0:
		ans += 1
		n_factorial //= p
	print(ans)