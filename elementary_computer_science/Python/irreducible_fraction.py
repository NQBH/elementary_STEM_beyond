from math import gcd

def irreducible_fraction(a, b):
	assert b != 0 # error: div by 0
	if b < 0: # switch to positive denominator
		a, b = -a, -b
	if gcd(a, b) > 1:
		a, b = a // gcd(a, b), b // gcd(a, b)
	return a, b # return str(a) + '/' + str(b)

a, b = map(int, input().split())
print(irreducible_fraction(a, b))