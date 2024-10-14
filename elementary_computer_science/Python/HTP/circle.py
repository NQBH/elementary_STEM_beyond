T = list(map(int, input().split()))[:2]
n, k = T[0], T[1]
A = list(map(int, input().split()))[:n]
A.sort()
i = 0
while k >= A[i]:
	k += A[i]
	i += 1
print(k)