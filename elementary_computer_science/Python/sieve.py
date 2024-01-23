def Eratosthenes_sieve(n): # O(n log log n)
	P = [True] * n
	ans = [2]
	for i in range(3, n, 2):
		if P[i]:
			ans.append(i)
			for j in range(2 * i, n, i):
				P[j] = False
	return ans

def Gries_Misra_sieve(n): # O(n)
	primes = []
	factor = [0] * n
	for x in range(2, n):
		if not factor[x]: # no factor found
			factor[x] = x # meaning x is prime
			primes.append(x)
		for p in primes: # loop over primes found so far
			if p > factor[x] or p * x >= n:
				break
			factor[p * x] = p # p is the smallest factor of p * x
	return primes, factor

n = int(input())
print(Eratosthenes_sieve(n))
print(Gries_Misra_sieve(n))