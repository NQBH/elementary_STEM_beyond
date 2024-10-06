k = 10**9 + 7
x, y, n = map(int, input().split())
mem = [x, y]
for i in range(3, n + 1):
	if i % 2 == 0:
		mem[1] = (mem[0] + mem[1]) % k
	else:
		mem[0] = abs(mem[0] - mem[1]) % k
print(mem[(n + 1) % 2])