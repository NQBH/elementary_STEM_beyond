def pgcd(a, b):
	return a if b == 0 else pgcd(b, a % b)

a, b = map(int, input().split())
print(pgcd(a, b))