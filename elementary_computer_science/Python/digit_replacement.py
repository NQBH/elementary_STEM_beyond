def digit_replacement(n):
	ans = ''
	for i in range(len(n)):
		if n[i] == '0':
			ans += '5'
		else:
			ans += n[i]
	return ans
t = int(input())
for _ in range(t):
	n = input()
	print(digit_replacement(n))