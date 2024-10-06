def rut_gon(a, b):
	x, y = a, b
	while a != b:
		if a > b:
			a -= b
		else:
			b -= a
	x, y = x // a, y // a
	return f'{x} {y}' # {x} / {y}?
def sqrt(x, n):
	if x in [0, 1]:
		return str(x)
	elif x < 1:
		return 'ERROR' # missed odd roots of negative rationals
	for k in range(n, 1, -1):
		if n % k == 0:
			for i in range(int((x // 2)**(1/k)) + 2, 1, -1):
				if x % (i**k) == 0:
					if k == n:
						if x == i**k:
							return str(i)
						else:
							return f'{i}sqrt[{n}]({x // (i**k)})' # same: return f'{i}sqrt[{n}]({x//(i**n)})'
					else:
						return f'sqrt[{n // k}]({i})'
					exit() # redundant?
	return f'sqrt[{n}]({x})'
x = '12.(345)'
n = 2
if '.' in x:
	dot = x.index('.')
	if '(' in x: # infinite periodic decimals
		bf_dot = int(x[:dot]) # before dot
		print(bf_dot)
		Parenthesis = x.index('(')
		org_a = x[Parenthesis + 1:len(x) - 1]
		a = int(org_a)
		print(a)
		b = 9
		if x[dot + 1] == '(':
			for i in range(len(org_a) - 1):
				b = b*10 + 9
				print(b)
		else:
			Temp = x[dot + 1:Parenthesis]
			print(Temp)
			a = a + int(Temp)*(10**len(str(a))) - int(Temp)
			print(a)
			for i in range(len(org_a) - len(Temp) - 1):
				b = b*10 + 9
				print(b)
			b *= (10**len(Temp))
			print(b)
		a += bf_dot*b
		print(a)
	else: # finite decimals
		af_dot = len(x[dot + 1:])
		a = int(x.replace('.',''))
		b = 10**af_dot
	a,b = map(int, rut_gon(int(a), int(b)).split())
	if b == 1 :
		ans = str(sqrt(a,n))
	else:
		ans = str(sqrt(a,n)) + ' / ' + str(sqrt(b,n))
else:
	ans = sqrt(int(x), n)
print(ans)