def perfect(x):
	S = 0
	for i in range(1, x):
		if x % i == 0:
			S += i
	return S == x
n = int(input())
if perfect(n) == True:
	print(f'{n} is a perfect number')
	for i in range(n):
		if n % (i + 1) == 0:
			print(i + 1, end = ' ')
else:
	print(f'{n} is not a perfect number')