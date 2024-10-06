n, k = map(int, input().split())
A = list(map(int, input().split()))
A.sort()
for i in range(n):
	if k >= A[i]:
		k += A[i]
	else:
		break
print(k)