from math import *
a = int(input("Enter an integer a: "))
b = int(input("Enter an integer b: "))
n = int(input("Enter an positive integer n: "))
sum = 0
s5 = ""
sn = ""
# Function: Check prime 
def is_prime(x):
	if x == 1:
		return 0
	for i in range(2, int(sqrt(x)) + 1):
		if x % i == 0:
			return 0
	return 1

for i in range(a, b + 1):
	if is_prime(i): sum += i
	if i % 5 == 0: s5 += str(i) + ", "
	if i % n == 0: sn += str(i) + ", "
print(sum)
print(s5[:len(s5) - 2])
print(sn[:len(sn) - 2])