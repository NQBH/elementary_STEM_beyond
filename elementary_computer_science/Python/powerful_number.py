from math import sqrt
def is_prime(x):
	if x == 1: return 0
	for i in range(2, int(sqrt(x)) + 1):
		if x % i == 0: return 0
	return 1
s = ""
n = 1
while n <= 1000:
	flag = 0
	for i in range(1, n):
		if is_prime(i) and n % i == 0:
			if n % (i*i) != 0:
				flag = 0
				break
			else: flag = 1
	if flag == 1: s += str(n) + " "
	n += 1
print(s)