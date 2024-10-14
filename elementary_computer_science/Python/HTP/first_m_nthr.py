try:
	n = int(input('Nhap so tu nhien n = '))
	m = int(input('Nhap so tu nhien m = '))
	if n < 0 or m < 0:
		print('Du lieu khong dung.')
	else:
		for i in range(m):
			#d = i**(1/n)
			#print(type(d))
			print(i**(1/n))
except:
	print('Day khong la 1 so tu nhien.')