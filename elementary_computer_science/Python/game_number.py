t = int(input())
for _ in range(t):
	x, y, n = map(int, input().split())
	w = x*2**((n + 1) // 2)
	z = y*2**(n // 2)
	print(max(w, z) // min(w, z))