def ngto(x):
	d = 0
	for i in range(1,(x//2)+1):
		if x%i == 0:
			d += 1
	return d == 1
def amstrong(x):
	for i in range(1,int((x**(1/2) + 1))):
		if ngto(i) == True:
			if x % i == 0 and x % (i**2) == 0:
				return True
				break
for i in range(1,1001):
	if amstrong(i) == True:
		print(i, end = ' ')