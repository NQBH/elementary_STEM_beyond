import math
try:
	n = int(input('Nhap so tu nhien n = '))
	if n < 0:
		print('Day khong la 1 so tu nhien.')
	else:
		for i in range(n):
			print(math.sqrt(i))
except:
	print('Day khong la 1 so tu nhien.')