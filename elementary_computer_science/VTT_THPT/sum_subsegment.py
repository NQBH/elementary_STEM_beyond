n, k = map(int, input().split())
a = list(map(int, input().split()))
lmin = n # minimum length
pos = 0
for i in range(n):
	s = 0
	for j in range(i, n):
		s += a[j];
		if (s == k and lmin > j - i + 1):
			lmin = j - i + 1
			pos = i + 1
			break
if (pos == 0): print(0)
else: print(pos, lmin)