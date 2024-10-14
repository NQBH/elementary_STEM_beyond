try:
	n = int(input('Nhap n='))
	if n < 0 :
		print('Day khong la 1 so tu nhien.')
	else :
		f1 = 0
		f2 = 1
		print(str(n)+' so Fibonacci dau tien: ', end='')
		for i in range(n):
			print(f2, end=' ')
			f2 = f1 + f2
			f1 = f2
except:
	print('Day khong la 1 so tu nhien')