def UCLN(a, b):
	while a != b:
		if a > b:
			a -= b
		else:
			b -= a
	return a
def BCNN(a, b):
	return (a*b) // UCLN(a, b)
n = int(input())
A = list(map(int, input().split()))[:n]
x = BCNN(A[0], A[1])
for i in range(1, len(A)):
	x = BCNN(x, A[i])
x *= x
print(x)
print('Phan du khi chia a cho 10^9 + 7:', end = ' ')
for i in range(len(A)):
	print(A[i] % ((10**9) + 7), end = ' ')