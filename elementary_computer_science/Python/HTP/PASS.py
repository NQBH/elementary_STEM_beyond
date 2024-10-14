st = input()
F = list(map(int, input().split()))
password = ''
i, j = 0, 0
while i != len(st):
	if st[i] != '*':
		password += st[i]
	else:
		while F[j] == 0:
			j +=1
		password += chr(97 + j)
		F[j] -=1
	i += 1
print(password)