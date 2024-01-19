def sum_proper_divisor(n):
	s = 0
	for k in range(1, int(n/2) + 1):
		if n % k == 0:
			s = s + k
	return s
n = int(input())
a = list(map(int, input().split()))
for i in range(n):
	if (a[i] <= sum_proper_divisor(a[i])): print(1)
	else: print(0)