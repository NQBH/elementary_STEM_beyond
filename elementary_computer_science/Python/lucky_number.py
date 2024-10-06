def luck_number(n, k):
	if k <= (n + 1) // 2:
		print(2*k - 1)
	else:
		print(2*(k - round((n + 1)/2) + 1))

nk = input()
nk = nk.split()
n = int(nk[0])
k = int(nk[1])
luck_number(n, k)
"""
# Print all
for i in range(1, k + 1):
	luck_number(n, i)
"""