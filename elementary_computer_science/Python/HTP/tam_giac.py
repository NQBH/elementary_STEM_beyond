from math import sqrt
X = "b=3.34" #input() 
Y = "c=4.456" #input()
if X[:X.index('=')] > Y[:Y.index('=')]:
	X, Y = Y, X
if '.' in X :
	# x = int(X[X.index('=') + 1:X.index('.')]) + int(X[X.index('.') + 1:])/(10**len(X[X.index('.') + 1:]))
	x = float(X[X.index('=') + 1:])
else:
	x = int(X[X.index('=') + 1:])
if '.' in Y :
	# y = int(Y[Y.index('=') + 1:Y.index('.')]) + int(Y[Y.index('.') + 1:])/(10**len(Y[Y.index('.') + 1:]))
	y = float(Y[Y.index('=') + 1:])
else:
	y = int(Y[Y.index('=') + 1:])
X = X[:X.index('=')]
Y = Y[:Y.index('=')]
#=============================================================
# case A
if X == 'a':
	a = x
	if Y == 'b':
		b = y
		c = sqrt(a*a - b*b)
		ba, ca = b*b / a, c*c / a
		h = sqrt(ba*ca) # h = b*c / a
	elif Y == "b'":
		ba = y
		b = sqrt(a*ba)
		c = sqrt(a*a - b*b)
		ca = c*c / a
		h = sqrt(ba*ca) # h = b*c / a
	elif Y == 'c':
		c = y
		b = sqrt(a*a - c*c)
		ba, ca = b*b / a, c*c / a
		h = sqrt(ba*ca)
	elif Y == "c'":
		ca = y
		c = sqrt(a*ca)
		b = sqrt(a*a - c*c)
		ba = b*b / a
		h = sqrt(ba*ca)
	elif Y == 'h':
		h = y
		ca = a/2 + sqrt((a*a)/4 - h*h)
		ba = a/2 - sqrt((a*a)/4 - h*h)
		c, b = sqrt(a*ca), sqrt(a*ba)
#=============================================================
# case B
elif X == 'b':
	b = x
	if Y == "b'":
		ba = y
		a = b*b / ba
		c = sqrt(a*a - b*b)
		ca = c*c / a
		h = sqrt(ba*ca)
	elif Y == 'c':
		c = y
		a = sqrt(b*b + c*c)
		ba, ca = b*b / a, c*c / a
		h = sqrt(ba*ca)
	elif Y == "c'":
		ca = y
		ba = (-ca + sqrt(ca*ca + 4*b*b))/2
		a = ca + ba
		c = sqrt(a*a - b*b)
		h = sqrt(ba*ca)
	elif Y == 'h':
		h = y
		ba = sqrt(b*b - h*h)
		ca = h*h / ba
		a = ba + ac
		c = sqrt(a*a - b*b)
#=============================================================
# case B' 
elif X == "b'":
	ba = x
	if Y == 'c':
		c = y
		ca = (-ba + sqrt(ba*ba + 4*c*c))/2
		a = ca + ba
		b = sqrt(a*a - c*c)
		h = sqrt(ba*ca)
	elif Y == "c'":
		ca = y
		a = ca + ba
		c, b = sqrt(a*ca), sqrt(a*ba)
		h = sqrt(ba*ca)
	elif Y == 'h':
		h = y
		ca = h*h / ba
		a = ca + ba
		c, b = sqrt(a*ca), sqrt(a*ba)
		h = sqrt(ba*ca)
#=============================================================
# case C
elif X == "c":
	c = x
	if Y == "c'":
		ca = y
		h = sqrt(c*c - ca*ca)
		ba = h*h / ca
		a = ca + ba
		b = sqrt(a*a - c*c)
	elif Y == 'h':
		h = y
		ca = sqrt(c*c - h*h)
		ba = h*h / ca
		a = ca + ba
		b = sqrt(a*a - c*c)
#=============================================================
# case C'
elif X == "c'":
	ca = x
	if Y == 'h':
		h = y
		c = sqrt(ca*ca + h*h)
		ba = h*h / ca
		a = ca + ba
		b = sqrt(a*a - c*c)
#=============================================================
print(f"""a={round(a,3)}
b={round(b,3)}
b'={round(ba,3)}
c={round(c,3)}
c'={round(ca,3)}
h={round(h,3)}""")