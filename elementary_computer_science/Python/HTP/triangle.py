try:
	a,b,c = float(input('Nhap a = ')), float(input('Nhap b = ')), float(input('Nhap c = '))
	if (a + b > c) and (a + c > b) and  (b + c > a):
		loai_tg = ''
		if (a*a + b*b == c*c) or (a*a + c*c == b*b) or (b*b + c*c == a*a):
			loai_tg = 'vuong'
		elif (a*a + b*b > c*c) and (a*a + c*c > b*b) and (b*b + c*c > a*a):
			loai_tg = 'nhon'
		else:
			loai_tg = 'tu'
		print('Day la do dai 3 canh cua 1 tam giac ' + loai_tg)
	else: 
		print('Day khong la do dai 3 canh cua 1 tam giac.')			
except:
	print('Day khong phai la 1 so.')