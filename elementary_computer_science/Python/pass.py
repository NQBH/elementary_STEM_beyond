s = input()
f = list(map(int, input().split()))
s = list(s)
j = 0
for i in range(len(s)):
	if s[i] == '*':
		while f[j] == 0:
			j += 1
		s[i] = chr(j + 97)
		f[j] -= 1
s = "".join(s)
print(s)