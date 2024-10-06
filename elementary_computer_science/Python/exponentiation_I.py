n = int(input())
c = 10**9 + 7
for _ in range(n):
	a, b = map(int, input().split())
	a = a % c
	exp = a**b
	if exp < c:
		print(exp)
	else:
		print(exp % c)