def prime(x):
	d = 0
	for i in range(1, (x//2) + 1):
		if x % i == 0:
			d += 1
	return d == 1
n = int(input())
for i in range(n):
	k = int(input())
	for j in range(k - 2, 1, -1):
		if prime(j) == True and prime(k - j) == True:
			print(f'{k} = {j} + {k - j}')
			break # uncomment if want only 1 representation, comment if want all satisfied representations