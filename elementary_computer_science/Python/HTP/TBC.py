n, m = map(int,input().split())
A = list(map(int,input().split()))[:n]
d = 0
for i in range(n-2):
	for j in range(i+1,n-1):
		for k in range(j+1,n):
			if (A[i] + A[j] + A[k])/3 == m:
				d += 1
print(d)