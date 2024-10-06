# from math import gcd
def GCD(a, b):
	a, b = abs(a), abs(b)
	while a*b != 0:
		if a > b:
			a = a % b
		else:
			b = b % a
	return max(a,b)
a, b, c = map(int,input().split())
# print(gcd(a, b, c))
print(GCD(GCD(a, b), c))