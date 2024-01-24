def merge(x, y): # O(n log n)
	z = []
	i, j = 0, 0
	while i < len(x) or j < len(y):
		if j == len(y) or i < len(x) and x[i] <= y[j]: # priority on x
			z.append(x[i])
			i += 1
		else:
			z.append(y[j]) # now switch to y
			j += 1
	return z

x = list(map(int, input().split()))
y = list(map(int, input().split()))
print(merge(x, y))