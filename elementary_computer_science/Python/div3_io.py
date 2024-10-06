file = open("div3.inp", "r")
n = int(file.readline())
a = list(map(int, file.readline().split()))
c = [0, 0, 0]
for x in a:
	c[x % 3] += 1
file.close()
res = (c[0]*(c[0] - 1)) // 2 + c[1]*c[2]
file = open("div3.out", "w")
file.write(str(res))
file.close()