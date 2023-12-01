R = int(input())
ans = 0
for i in range(1, R):
	ans = max(ans, 4*i*int((R*R - i*i) ** .5))
print(ans)