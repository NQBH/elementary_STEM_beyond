from bisect import bisect_left

def longest_increasing_subsequence(x): # O(n log n)
	n = len(x)
	p = [None] * n
	h = [None]
	b = [float('-inf')] # - infinity
	for i in range(n):
		if x[i] > b[-1]:
			p[i] = h[-1]
			h.append(i)
			b.append(x[i])
		else: # binary search: b[k - 1] < x[i] <= b[k]
			k = bisect_left(b, x[i])
			h[k] = i
			b[k] = x[i]
			p[i] = h[k - 1]
	# extract solution in reverse order
	q = h[-1]
	s = []
	while q is not None:
		s.append(x[q])
		q = p[q]
	return s[::-1] # reverse the list to obtain the solution