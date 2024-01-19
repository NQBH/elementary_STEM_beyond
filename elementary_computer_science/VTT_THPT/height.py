N = int(1e6)
def sieve():
	p[0] = p[1] = 0
	for i in range(2, int(N**.5) + 1):
		if (p[i] == 1):
			for j in range(i*i, N, i):
				p[j] = 0
def sum_digit(x):
	s = 0
	while (x > 0):
		s += x % 10
		x //= 10
	return s
p = [1]*(N + 3)
sieve()
n, h = map(int, input().split())
cnt = 0
for i in range(2, n + 1):
	if (p[i] == 1 and sum_digit(i) == h):
		print(i)
		cnt += 1
print(cnt)