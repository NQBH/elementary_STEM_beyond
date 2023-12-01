l, r = map(int, input().split())
c = [0]*100
ans = 0
def sum_digit(n):
	s = 0
	while n > 0:
		s += n % 10
		n //= 10
	return s
for i in range(l, r + 1):
	k = sum_digit(i)
	if c[k] == 0: c[k] = i
	else: ans = max(ans, i - c[k])
print(ans)