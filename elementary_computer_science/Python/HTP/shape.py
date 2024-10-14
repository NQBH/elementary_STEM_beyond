m, n = map(int, input().split())
count = 0
while m != 0 and n != 0:
	if m > n:
		count += m // n
		m %= n
	else:
		count += n // m
		n %= m
print(count)