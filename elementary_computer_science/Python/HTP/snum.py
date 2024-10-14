n = int(input())
A = list(map(int, input().split()))[:n]
i = 0
while A.count(A[i]) > 1:
	i += 1
print(A[i])