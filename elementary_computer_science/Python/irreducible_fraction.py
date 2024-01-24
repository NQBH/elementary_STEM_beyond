from math import gcd

def irreducible_fraction(a, b):
	if b == 0:
		print('error: divisible by zero')
		exit()
	if b < 0: # switch to positive denominator
		a, b = -a, -b
	if gcd(a, b) > 1:
		print('reducible')
		a, b = a // gcd(a, b), b // gcd(a, b)
	else:
		print('already irreducible')
	return a, b # return str(a) + '/' + str(b)

a, b = map(int, input().split())
print(irreducible_fraction(a, b))