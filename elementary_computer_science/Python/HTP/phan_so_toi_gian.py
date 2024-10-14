def UCLN(a,b):
	while a != b:
		if a > b:
			a -=b
		else:
			b-=a
	return a
T = list(map(int,input().split('/')))[:2]
a = T[0] // UCLN(T[0],T[1])
b = T[1] // UCLN(T[0],T[1])
print(f'{a}/{b}')

