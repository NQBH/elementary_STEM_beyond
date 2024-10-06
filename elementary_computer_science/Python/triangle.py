a = float(input("Enter a number a = "))
b = float(input("Enter a number b = "))
c = float(input("Enter a number c = "))

if (a > 0) and (b > 0) and (c > 0) and (a + b > c) and (b + c > a) and (c + a > b):
	print("{},{},{} are 3 edges of a triangle.".format(a,b,c))
	if (a**2 == b**2 + c**2) or (b**2 == c**2 + a**2) or (c**2 == a**2 + b**2):
		print("{},{},{} are 3 edges of a right triangle.".format(a,b,c))
	else:
		if (a**2 > b**2 + c**2) or (b**2 > c**2 + a**2) or (c**2 > a**2 + b**2):
			print("{},{},{} are 3 edges of an obtuse triangle.".format(a,b,c))
		else:
			print("{},{},{} are 3 edges of an acute triangle.".format(a,b,c))
else:
	print("{},{},{} are not 3 edges of a triangle.".format(a,b,c))