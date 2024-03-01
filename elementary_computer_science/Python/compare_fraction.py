from math import gcd, lcm

def irreducible_fraction(a, b):
	if b == 0:
		print('error: divisible by 0')
		exit()
	if b < 0: # switch to positive denominator
		a, b = -a, -b
	if gcd(a, b) > 1:
		a, b = a // gcd(a, b), b // gcd(a, b)
	return a, b

def compare_fraction(a, b, c, d): # compute a/b - c/d
	den = lcm(b, d)
	num = a * den // b - c * den // d
	if num < 0: return -1
	elif num == 0: return 0
	else: return 1

a, b, c, d = map(int, input().split())
a1, b1 = irreducible_fraction(a, b)
c1, d1 = irreducible_fraction(c, d)
t = compare_fraction(a1, b1, c1, d1)
a = str(a)
b = str(b)
c = str(c)
d = str(d)
if t < 0: print(a + '/' + b + ' < ' + c + '/' + d) #print(a, '/', b, ' < ', c, '/', d)
elif t == 0: print(a + '/' + b + ' = ' + c + '/' + d)
else:print(a + '/' + b + ' > ' + c + '/' + d)