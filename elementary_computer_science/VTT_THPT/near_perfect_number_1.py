N = int(1e6)
def init():
	k = int(N ** .5)
	for i in range(2, k + 1):
		for j in range(i*i, N + 1, i):
			c[j] += i;
			if (i*i != j): c[j] += j/i;
c = [1]*(N + 3)
init()
n = int(input())
a = list(map(int, input().split()))
for x in a:
	if (c[x] >= x): print(1)
	else: print(0)