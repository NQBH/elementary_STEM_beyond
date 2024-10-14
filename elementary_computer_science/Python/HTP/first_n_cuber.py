try:
	n = int(input('Nhap so tu nhien n = '))
	if n < 0:
		print('Day khong la 1 so tu nhien.')
	else:
		for i in range(n):
			print(i**(1/3))
except:
	print('Day khong la 1 so tu nhien.')