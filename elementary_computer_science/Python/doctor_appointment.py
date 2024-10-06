# 1st solution. Author: NQBH
t = int(input())
while t != 0:
	t -= 1
	n, x = map(int, input().split())
	if x >= 10:
		print(0)
	else:
		print((n - 1)*(10 - x))
# 2nd solution. Author: Nguyen Tien Duc
t = int(input())
while t != 0:
	t -= 1
	n, x = map(int, input().split())
	ans = x + 10*(n - 1) - x*n
	if ans < 0:
		ans = 0
	print(ans)