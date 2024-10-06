n = int(input())
p, a, x, y = [], [], [], 0
for _ in range(n):
	tmp = input()
	x.append(int(tmp[-1]))
	a.append(int(tmp[:len(tmp) - 1]))
for i in range(n):
	y += a[i]**x[i]
print(y)