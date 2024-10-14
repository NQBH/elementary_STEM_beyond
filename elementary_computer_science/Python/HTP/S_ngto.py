def ngto(x):
	d = 0
	for i in range(1,(x//2)+1):
		if x%i == 0:
			d += 1
	return d == 1
a = int(input())
b = int(input())
S = 0
for i in range(a,b+1):
	if ngto(i) == True:
		S += i
print(S)
for i in range(a,b+1):
	if i%5 == 0:
		print(i,end=' ')
print()
n = int(input())
for i in range(a,b+1):
	if i%n == 0:
		print(i,end=' ')