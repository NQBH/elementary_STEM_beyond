t = int(input())
A = []
for _ in range(t):
	n = int(input())
	A += [str(2*(n - 1))]
print('\n'.join(A))