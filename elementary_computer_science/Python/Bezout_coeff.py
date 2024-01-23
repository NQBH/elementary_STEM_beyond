def Bezout_coeff(a, b):
	if b == 0:
		return (1, 0)
	u, v = Bezout_coeff(b, a % b)
	return (v, u - (a // b) * v)

def inv(a, p):
	return Bezout_coeff(a, p)[0] % p

a, b = map(int, input().split())
print(Bezout_coeff(a, b))