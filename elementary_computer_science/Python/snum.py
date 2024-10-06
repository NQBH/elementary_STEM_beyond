n = int(input())
A = list(map(int, input().split()))
A.sort()
if A[0] != A[1]:
	print(A[0])
	exit()
for i in range(2, n - 1):
	if A[i] != A[i-1] and A[i] != A[i+1]:
		print(A[i])
		exit()
print(A[n-1])