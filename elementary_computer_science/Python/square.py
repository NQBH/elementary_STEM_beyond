inf = 1000
xmin, xmax, ymin, ymax = inf, -inf, inf, -inf
file = open("square.inp", "r")
n = int(file.readline())
for _ in range(n):
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