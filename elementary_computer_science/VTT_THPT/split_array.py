def find_pos(a):
	s = sum(a)
	if (s % 2 == 1): return 0
	t = 0
	for i in range(n):
		t += a[i]
		if (2*t == s):
			return i + 1
	return 0
n = int(input())
a = list(map(int, input().split()))
print(find_pos(a))