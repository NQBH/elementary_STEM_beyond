n = int(input())
A = input()
A = A.split()
A = [int(i) for i in A]
ans = 0
for i in range(1, len(A)):
	if A[i] < A[i - 1]:
		ans = ans + A[i-1] - A[i]
		A[i] = A[i - 1]
print(ans)