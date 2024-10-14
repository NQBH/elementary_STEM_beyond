import math
try:
	n = int(input('Nhap so tu nhien n = '))
	if n < 0:
		print('Day khong la 1 so tu nhien.')
	elif pow(round(math.sqrt(n)),2) == n:
		print(str(n) + ' la so chinh phuong.')
	else:
		print(str(n) + ' khong la so chinh phuong.')
except:
	print('Day khong la 1 so tu nhien.')