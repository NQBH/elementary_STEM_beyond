n = int(input())
a, b, c = [], [], []
for _ in range(n):
	tmp = list(map(int, input().split()))
	a.append(tmp[0])
	b.append(tmp[1])
	c.append(tmp[2])
print(a, b, c)
sort_index = [[i, x] for i, x in sorted(enumerate(c), key=lambda x: x[1])]
print(sort_index)
"""
for i in range(n - 1):
	if a[sort_index[i]] == a[sort_index[i + 1]]:

	else:
"""