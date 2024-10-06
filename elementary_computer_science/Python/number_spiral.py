t = int(input())
for test in range(t):
	A = input()
	A = A.split()
	A = [int(k) for k in A]
	y = A[0]
	x = A[1]
	i = 0
	j = 1
	B = [[1]*max(x,y)]*max(x,y)
	while i != y - 1 and j != x - 1:
		if i == j:
			if j%2 != 0:
				B[i][j] = B[i-1][j]
			else:
				B[i][j] = B[i][j-1]
		elif i > j:
			if i%2 != 0:
				B[i][j] = B[i][j+1]
			else:
				B[i][j] = B[i][j-1]
		else:
			if j%2 != 0:
				B[i][j] = B[i-1][j]
			else:
				B[i][j] = B[i+1][j]
		i = i + 1
		j = j + 1
print(B)