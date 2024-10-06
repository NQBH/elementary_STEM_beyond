def UCLN(m, n):
	"Function used to compute gcd of 2 integers m & n."
	while m != n:
		if m < n:
			n = n - m
		else:
			m = m - n
	return m
def sum_proper_divisor(n):
	"""Function used to compute the sum of all proper divisors of an integer n.
	This function is used in several cases, e.g., to check if an integer is a perfect number or not."""
	s = 0
	for k in range(1, n):
		if n % k == 0:
			s = s + k
	return s
print(UCLN.__doc__)
print(sum_proper_divisor.__doc__)