t = int(input())
for _ in range(t):
	T0, Q0, L0 = map(int, input().split())
	T, Q, L = T0, Q0, L0
	while T and Q and L > 1:
		if T % L == 0:
			T -= 1
		elif Q % L == 0:
			Q -= 1
		else:
			L -= 1
	print(T0 - T, Q0 - Q)