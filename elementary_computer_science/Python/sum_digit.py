def sum_digit(n):
	ans = 0
	while n:
		ans += n % 10
		n = n // 10
	return ans
t = int(input())
for _ in range(t):
	n = int(input())
	while n > 9:
		n = sum_digit(n)
	print(n)