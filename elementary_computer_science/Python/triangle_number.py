from math import sqrt, floor
t = int(input())
for _ in range(t):
	n = int(input())
	"""
	# 1st solution
	i = 1
	sum = 0
	while sum < n:
		sum += i
		i += 1
	if n == sum:
		print(1)
	else:
		print(0)
	"""
	# 2nd solution
	k = floor(sqrt(2*n))
	if n == k*(k + 1)/2:
		print(1)
	else:
		print(0)