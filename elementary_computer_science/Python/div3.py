count = 0
n = int(input())
a = input()
a = a.split()
for i in range(n):
	for j in range(i + 1, n):
		if (int(a[i]) + int(a[j])) % 3 == 0:
			count += 1
print(count)