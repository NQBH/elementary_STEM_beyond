n = int(input())
A = [1]
if n == 1:
	print(1)
elif n == 2 or n == 3:
	print("NO SOLUTION")
elif n == 4:
	print("2 4 1 3")
else:
	for i in range(1, n):
		tmp = A[i-1] + 2
		if tmp <= n:
			A.append(tmp)
		else:
			A.append(2)
	print(*A)