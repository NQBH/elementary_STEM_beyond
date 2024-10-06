# 1st solution. Author: Nguyen Duc Tai
t = int(input())
while t != 0:
	t -= 1
	s = 0
	n = int(input())
	while n != 0:
		s += n % 2
		n //= 2
	if s % 2 != 0:
		print("odd")
	else:
		print("even")
# 2nd solution. Author: NQBH
t = int(input())
while t != 0:
	t -= 1
	s = 0
	n = int(input())
	n = bin(n)
	for c in n:
		if c == '1':
			s += 1
	if s % 2 != 0:
		print("odd")
	else:
		print("even")