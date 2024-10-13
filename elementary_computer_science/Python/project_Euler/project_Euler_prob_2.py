n = 4000000
ans, Fo, Fn = 0, 1, 2
while Fn <= n:
	if Fn % 2 == 0:
		ans += Fn
	Fo, Fn = Fn, Fo + Fn
print(ans)