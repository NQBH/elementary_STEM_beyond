def three_partition(x):
	f = [0] * (1 << len(x))
	for i, _ in enumerate(x):
		for S in range(1 << i):
			f[S | (1 << i)] = f[S] + x[i]
	for A in range(1 << len(x)):
		for B in range(1 << len(x)):
			if A & B == 0 and f[A] == f[B] and 3 * f[A] == f[-1]:
				return (A, B, ((1 << len(x)) - 1) ^ A ^ B)
	return None