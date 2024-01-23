def fast_exponentiation(a, b, p):
	assert a >= 0 and b >= 0 and p >= 1
	result = 1
	while b:
		if b % 2 == 1:
			result = (result * a) % p
		a = (a * a) % p
		b >>= 1
	return result

a, b, p = map(int, input().split())
print(fast_exponentiation(a, b, p))