s = input()
i = 0
ans = ""
while i < len(s):
	temp = s[i]
	count = 0
	while temp == s[i]:
		i += 1
		count += 1
		if i == len(s):
			break
	ans += str(count) + temp
print(ans)