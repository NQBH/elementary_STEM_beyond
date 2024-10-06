# 1st solution. Author: NQBH
def square():
	n = int(input())
	a = [0]*n
	b = [0]*n
	for i in range(n):
		tmp = input()
		tmp = tmp.split()
		a[i] = int(tmp[0])
		b[i] = int(tmp[1])
	max_diff = 0
	for i in range(n):
		for j in range(i + 1, n):
			if abs(a[i] - a[j]) > max_diff:
				max_diff = abs(a[i] - a[j])
			if abs(b[i] - b[j]) > max_diff:
				max_diff = abs(b[i] - b[j])
	print(max_diff**2)
square()
# 2nd solution. Author: Vuong Thanh Trung
inf = 1000
xmin = inf
xmax = -inf
ymin = inf
ymax = -inf
file = open("square.inp", "r")
n = int(file.readline())
for i in range(n):
	x, y = map(int, file.readline().split())
	xmin = min(xmin, x)
	xmax = max(xmax, x)
	ymin = min(ymin, y)
	ymax = max(ymax, y)
file.close()
file = open("square.out", "w")
c = max(xmax - xmin, ymax - ymin)
file.write(str(c*c))
file.close()