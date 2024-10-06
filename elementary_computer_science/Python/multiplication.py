a = input()
b = input()
prod = int(a) * int(b)
max_len = len(str(prod)) + 1
s = a
while len(s) < max_len:
	s = ' ' + s
print(s)
print("x")
s = b
while len(s) < max_len:
	s = ' ' + s
print(s)
sep = "-" * max_len # separator
print(sep)
space = 0
for i in range (len(b), 0, -1):
	s = int(b[i-1]) * int(a)
	if space > 0:
		tmp = ' ' * space
		s = str(s) + tmp
	s = str(s)
	while len(s) < max_len:
		s = ' ' + s
	print(s)
	space += 1
if len(b) > 1:
	print(sep)
	print(' ' + str(prod))