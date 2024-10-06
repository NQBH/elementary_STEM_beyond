def closest_values(L):
	assert len(L) >= 2
	L.sort()
	valmin, argmin = min((L[i] - L[i - 1], i) for i in range(1, len(L)))
	return L[argmin - 1], L[argmin]