n = int(input())
S = 0
for i in range(n):
	P = int(input())
	S += (P // 10)**(P % 10)
print(S)