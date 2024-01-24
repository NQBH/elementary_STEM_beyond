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

def reduce_common_den(a, b, c, d): # compute a/b + c/d
	den = lcm(b, d)
	num = a * den // b + c * den // d
	return num, den

def reduce_common_den_list(num_list, dem_list): # compute sum_{i=1}^n ai/bi with num = [a1, a2,..., an], dem = [b1, b2,..., bn]
	assert len(num_list) == len(dem_list) == n
	num, den = 0, 1
	for i in range(n):
		if dem_list[i] == 0:
			print('error: divisible by 0')
			exit()
		if dem_list[i] < 0: # switch to positive denominator
			num_list[i], dem_list[i] = -num_list[i], -dem_list[i]
		den = lcm(den, dem_list[i])
	for i in range(n):
		num += num_list[i] * den // dem_list[i]
	return num, den

a, b, c, d = map(int, input().split())
num, dem = reduce_common_den(a, b, c, d)
print(irreducible_fraction(num, dem))

n = int(input())
num_list = list(map(int, input().split())) # list of numerators
dem_list = list(map(int, input().split())) # list of denominators
a, b = reduce_common_den_list(num_list, dem_list)
print(irreducible_fraction(a, b))