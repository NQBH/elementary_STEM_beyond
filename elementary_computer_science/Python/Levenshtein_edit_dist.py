def Levenshtein_edit_dist(x, y): # O(mn)
	n = len(x)
	m = len(y)
	# Create the table A # Row 0 and column 0 are initialized as required # The remaining entries will be overwritten during the computation
	A = [[i + j for j in range(m + 1)] for i in range(n + 1)]
	for i in range(n):
		for j in range(m):
			A[i + 1][j + 1] = min(A[i][j + 1] + 1, A[i + 1][j] + 1, A[i][j] + int(x[i] != y[j])) # insert, delete, substitution
	return A[n][m]

x, y = input().split()
print(Levenshtein_edit_dist(x, y))