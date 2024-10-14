t = int(input())
A = []
for _ in range(t):
	s = input()
	A += [s.replace('0', '5')]
print('\n'.join(A))