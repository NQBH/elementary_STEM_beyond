t = int(input())
for _ in range(t):
	n = int(input())
	tmp = '4'
	if n == 1:
		print('4')
	for _ in range(n):
		for i in range(len(tmp) - 1, -1, -1):
			if tmp[i] == '4':
				tmp[i] = '7'
				break
			else: # tmp[i] == '7'
				tmp i = '4'
				tmp[i - 1]

	print(tmp)