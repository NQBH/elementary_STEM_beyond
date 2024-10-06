n = int(input())
data = input()
A = data.split()
a = 1
while 1:
	for i in range(0, n):
		temp = int(A[i])
		if a**2 % temp != 0:
			break
	if i == n - 1 and (a**2) % temp == 0:
		print(a**2 % (10**9 + 7))
		break
	else:
		a += 1