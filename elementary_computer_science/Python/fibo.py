from functools import lru_cache
@lru_cache(maxsize=None)
def fibo_naive(n):
	if n <= 1:
		return n
	return fibo_naive(n - 1) + fibo_naive(n - 2)

def fibo_dp(n): # Dynamic programming: use n + 1 memory locations
	mem = [0, 1]
	for i in range(2, n + 1):
		mem.append(mem[-2] + mem[-1])
	return mem[-1]

def fibo_dp_mem(n): # Dynamic programming: use 2 memory locations
	mem = [0, 1]
	for i in range(2, n + 1):
		mem[i % 2] = mem[0] + mem[1]
	return mem[n % 2]