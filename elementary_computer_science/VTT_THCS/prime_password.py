l, r = map(int, input().split())
def sum_digit(n):
	s = 0
	while n > 0:
		s += n % 10
		n //= 10
	return s
def is_prime(n):
	for i in range(2, int(n ** .5 + 1)):
		if n % i == 0:
			return 0
	return 1
for i in range(l, r + 1):
	if is_prime(i) == is_prime(sum_digit(i)) == 1:
		print(i, end = ' ')