t = int(input())
for _ in range(t):
	k = int(input())
	ans = 0
	for a in range(1, k):
		for b in range(a + 1, k):
			if a + b <= k:
				ans += 1
	print(ans)