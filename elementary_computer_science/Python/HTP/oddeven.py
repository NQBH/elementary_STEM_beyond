A = list(map(int, input().split()))
n = A[2]
A.pop(2)
k = 10**9 + 7
for i in range(3, n + 1):
	if i % 2 == 0:
		A += [(A[i-2] + A[i-3]) % k]
	else:
		A += [abs(A[i-2] - A[i-3]) % k]
print(A[n-1])