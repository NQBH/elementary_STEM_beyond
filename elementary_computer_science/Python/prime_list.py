from math import *
# Function: Check prime
def is_prime(x):
	if x == 1: return 0
	for i in range(2, int(sqrt(x)) + 1):
		if x % i == 0: return 0
	return 1

s = ""
for i in range(1,100):
	if is_prime(i):
		s += str(i) + " "
print(s)