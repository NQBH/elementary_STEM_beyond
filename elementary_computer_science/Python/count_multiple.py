t = int(input())
for _ in range(t):
	l, r, a, b = map(int, input().split())
	ans = 0
	for i in range(l, r + 1):
		if i % a == 0 or i % b == 0:
			ans += 1
	print(ans)