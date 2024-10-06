n = int(input())
A = input()
A = A.split()
A = [int(i) for i in A]
A.sort()
if A[-1] == n - 1:
	print(n)
else:
	for i in range(n-1):
		if A[i] != (i + 1):
			print(i + 1)
			break