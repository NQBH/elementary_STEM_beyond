def matrix_mult_opt_order(M): # O(n^2)
	n = len(M)
	r = [len(Mi) for Mi in M]
	c = [len(Mi[0]) for Mi in M]
	opt = [[0 for j in range(n)] for i in range(n)]
	arg = [[None for j in range(n)] for i in range(n)]
	for j_i in range(1, n): # loop on i, j of increasing j - i = j_i
		for i in range(n - j_i):
			j = i + j_i
			opt[i][j] = float(’inf’)
			for k in range(i, j):
				alt = opt[i][k] + opt[k + 1][j] + r[i] * c[k] * c[j]
				if opt[i][j] > alt:
					opt[i][j] = alt
					arg[i][j] = k
	return opt, arg

def matrix_chain_mult(M):
	opt, arg = matrix_mult_opt_order(M)
	return _apply_order(M, arg, 0, len(M)-1)

def _apply_order(M, arg, i, j): # multiply matrices from M[i] to M[j] included
	if i == j:
		return M[i]
	k = arg[i][j] # follow placement of parentheses
	A = _apply_order(M, arg, i, k)
	B = _apply_order(M, arg, k + 1, j)
	row_A = range(len(A))
	row_B = range(len(B))
	col_B = range(len(B[0]))
	return [[sum(A[a][b] * B[b][c] for b in row_B) for c in col_B] for a in row_A]