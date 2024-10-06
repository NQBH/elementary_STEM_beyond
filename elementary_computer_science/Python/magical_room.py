t = int(input())
for _ in range(t):
	n, a, b = map(int, input().split())
	if a*b >= 6*n:
		print(a*b)
		print(a, b)
	else:
		while a*b < 6*n:
			if a <= b:
				b += 1
			else:
				a += 1
		print(a*b)
		print(a, b)