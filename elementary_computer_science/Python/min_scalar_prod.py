def min_scalar_prod(x, y):
	x1 = sorted(x) # make copies to preserve the input arguments
	y1 = sorted(y)
	return sum(x1[i] * y1[-i - 1] for i in range(len(x1)))