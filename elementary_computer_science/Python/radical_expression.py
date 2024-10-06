from math import sqrt, cbrt
def sqrt_simplification(n):
	if n < 0: print('error.')
	if n == 0 or n == 1: print(f'sqrt({n}) = {n}.')
	if n > 1:
		count = 0
		sqrt_n = round(sqrt(n))
		if n % (sqrt_n**2) == 0:
			print(f'sqrt({n}) = {sqrt_n}.')
		else:
			for i in range(sqrt_n - 1, 1, -1):
				if n % (i**2) == 0:
					count = 1
					sqrt_factor = i;
					rem = n // (sqrt_factor**2)
					break
			if count == 0:
				print(f'sqrt({n}) = sqrt({n}).')
			else:
				print(f'sqrt({n}) = {i}sqrt({rem}).')
def cbrt_simplification(n):
	if n == 0 or n == 1 or n == -1: print(f'cbrt({n}) = {n}.')
	if n != 0 and n != 1 and n != -1:
		count = 0
		cbrt_n = round(cbrt(n))
		if n % (cbrt_n**3) == 0:
			print(f'cbrt({n}) = {cbrt_n}.')
		else:
			for i in range(cbrt_n - 1, 1, -1):
				if n % (i**3) == 0:
					count = 1
					cbrt_factor = i;
					rem = n // (cbrt_factor**3)
					break
			if count == 0:
				print(f'cbrt({n}) = cbrt({n}).')
			else:
				print(f'cbrt({n}) = {i}cbrt({rem}).')
"""
def nth_rt_simplification(N, n):
	


	if n == 0 or n == 1: print(f'cbrt({n}) = {n}.')

	if N % 2 == 0:

	else:

	if n != 0 and n != 1 and n != -1:
		count = 0
		cbrt_n = round(cbrt(n))
		if n % (cbrt_n**3) == 0:
			print(f'cbrt({n}) = {cbrt_n}.')
		else:
			for i in range(cbrt_n - 1, 1, -1):
				if n % (i**3) == 0:
					count = 1
					cbrt_factor = i;
					rem = n // (cbrt_factor**3)
					break
			if count == 0:
				print(f'cbrt({n}) = cbrt({n}).')
			else:
				print(f'cbrt({n}) = {i}cbrt({rem}).')
"""
n = int(input())
# N = int(input())
sqrt_simplification(n)
cbrt_simplification(n)
# nth_rt_simplification(N, n)