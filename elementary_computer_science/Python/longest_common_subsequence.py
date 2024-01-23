def longest_common_subsequence(x, y): # O(mn)
	n = len(x)
	m = len(y)
	# compute optimal length
	A = [[0 for j in range(m + 1)] for i in range(n + 1)]
	for i in range(n):
		for j in range(m):
			if x[i] == y[j]:
				A[i + 1][j + 1] = A[i][j] + 1
			else:
				A[i + 1][j + 1] = max(A[i][j + 1], A[i + 1][j])
	# -- extract solution in reverse order
	sol = []
	i, j = n, m
	while A[i][j] > 0:
		if A[i][j] == A[i - 1][j]:
			i -= 1
		elif A[i][j] == A[i][j - 1]:
			j -= 1
		else:
			i -= 1
			j -= 1
			sol.append(x[i])
	return ''.join(sol[::-1]) # reverse the list to obtain the solution

x, y = input().split()
print(longest_common_subsequence(x, y))