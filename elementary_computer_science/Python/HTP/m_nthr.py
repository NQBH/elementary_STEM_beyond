try:
	m = int(input('Nhap so tu nhien m = '))
	n = int(input('Nhap so tu nhien n = '))
	if n < 0 or m < 0:
		print('Du lieu khong dung.')
	elif pow(round((m**(1/n))),n) == m:
		print(str(m) + ' la luy thua bac ' + str(n) + ' cua ' + str(round(m**(1/n))) + '.')
	else: 
		print(str(m) + ' khong la luy thua bac ' + str(n) + ' cua 1 so tu nhien.')
except:
	print('Day khong la 1 so tu nhien.')