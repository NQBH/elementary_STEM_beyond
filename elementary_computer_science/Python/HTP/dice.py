t = int(input())
A = []
for _ in range(t):
	n = int(input())
	A += [str(7 - n)];
print('\n'.join(A))