from math import sqrt
def is_triangle_number(x):
	x = x*8 + 1
	if int(sqrt(x))**2 != x:
		return 0
	return int(sqrt(x)) % 2
t = int(input())
A = []
for _ in range(t):
	n = int(input())
	A += [str(is_triangle_number(n))]
print('\n'.join(A))