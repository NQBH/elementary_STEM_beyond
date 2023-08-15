n = int(input())
a = [0]*n
b = [0]*n
for i in range(n):
	a[i], b[i] = map(int, input().split())
a.sort()
b.sort()
c = max(a[n-1] - a[0], b[n-1] - b[0])
print(c*c)