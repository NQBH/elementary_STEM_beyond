def UCLN(a, b):
	while a != b:
		if a > b:
			a -= b
		else:
			b -= a
	return a
a, b, c = map(int,input().split())
if (a <= 0 or b <= 0 or c <= 0):
	print("Error: Non-positive.")
else:
	a = UCLN(a,b)
	a = UCLN(a,c)
	print(a)