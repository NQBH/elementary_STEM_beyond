t = int(input())
while t != 0:
	t -= 1
	n = int(input())
	mouse = list(map(int, input().split()))
	house = list(map(int, input().split()))
	mouse.sort()
	house.sort()
	ans = 0
	for i in range(n):
		if ans < abs(mouse[i] - house[i]):
			ans = abs(mouse[i] - house[i])
	print(ans)