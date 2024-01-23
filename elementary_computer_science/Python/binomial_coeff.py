def Bezout_coeff(a, b):
	if b == 0:
		return (1, 0)
	u, v = Bezout_coeff(b, a % b)
	return (v, u - (a // b) * v)

def inv(a, p):
	return Bezout_coeff(a, p)[0] % p

def binom(n, k):
	prod = 1
	for i in range(k):
		prod = (prod * (n - i)) // (i + 1)
	return prod

def binom_modulo(n, k, p):
	prod = 1
	for i in range(k):
		prod = (prod * (n - i) * inv(i + 1, p)) % p
	return prod

n, k = map(int, input().split())
print(binom(n, k))
p = int(input())
print(binom_modulo(n, k, p))