from sys import stdin
n = int(stdin.readline())
A = list(map(int, stdin.readline().split()))
A = [int(i) for i in A]
A.sort()
if A[-1] == n - 1:
	print(n)
else:
	for i in range(n-1):
		if A[i] != (i + 1):
			print(i + 1)
			break
# Terminal:
# python3 missing_number_io.py < missing_number.inp > missing_number.out
# python3 missing_number_io.py < missing_number.inp | tee missing_number.out