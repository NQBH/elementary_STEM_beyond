from math import sqrt
def is_prime(x):
	if x == 1:
		return 0
	for i in range (2, int(sqrt(x)) + 1):
		if x % i == 0:
			return 0
	return 1
t = int(input())
for i in range(t):
	n = int(input())
	if n % 2 != 0:
		print(f'{n} is odd. Must input an even natural number.')
	else:
		for j in range(3, n//2):
			if is_prime(j) == 1 and is_prime(n - j) == 1:
				print(f'{n} = {j} + {n - j}')
				# break # uncomment if want only 1 representation, comment if want all satisfied representations