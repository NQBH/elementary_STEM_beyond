def discrete_binary_search(tab, lo, hi):
	while lo < hi:
		mid = lo + (hi - lo) // 2
		if tab[mid]:
			hi = mid
		else:
			lo = mid + 1
	return lo

# Standard module bisect
bisect_left(tab, x, 0, n)

def continuous_binary_search(f, lo, hi, gap = 1e-4):
	while hi - lo > gap:
		mid = (lo + hi) / 2.0
		if f(mid):
			hi = mid
		else:
			lo = mid
	return lo

def optimized_binary_search(tab, logsize):
	hi = (1 << logsize) - 1
	intervalsize = (1 << logsize) >> 1
	while intervalsize > 0:
		if tab[hi ^ intervalsize]:
			hi ^= intervalsize
		intervalsize >>= 1
	return hi

# Filling Tanks
level = continuous_binary_search(lambda level: volume(level) >= V, 0, hi)