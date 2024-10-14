def nhi_phan(x):
	s = ''
	while (x != 0):
		s += str(x % 2)
		x = x // 2
	return s	
def dem_bit1(s):
	d = s.count('1')
	return d
t = int(input())
A = []
for _ in range(t):
	n = int(input())
	if (dem_bit1(nhi_phan(n)) % 2 == 0):
		A += ['even']
	else:
		A += ['odd']
print('\n'.join(A))