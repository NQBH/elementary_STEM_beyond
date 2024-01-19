n, m = map(int, input().split())
a = [[0]*(m + 3) for i in range(n + 4)]
f = [[10**9]*(m + 3) for i in range(n + 4)]
x = [[0]*(m + 3) for i in range(n + 4)]
ans = [0]*(m + 3)
for i in range(m + 1): f[0][i] = 0;
for i in range(n):
	b = [0] + list(map(int, input().split()))
	for j in range(1, m + 1):
		a[i+1][j] = b[j];
for i in range(1,n + 1):
	f[i][1] = a[i][1];
	for j in range(2,m + 1):
		for k in range(i + 1):
			if (f[i][j] > f[k][j-1] + a[i-k][j]):
				f[i][j] = f[k][j-1] + a[i-k][j];
				x[i][j] = k;
jmin = 1
for j in range(1, m + 1):
	if (f[n][jmin] > f[n][j]): jmin = j;
print(f[n][jmin])
i = n
while (i > 0):
	ans[jmin] = i - x[i][jmin]
	i = x[i][jmin]
	jmin -= 1
for i in range(1, m + 1): print(ans[i])