from math import sqrt
def algebraic_expression(a, b, c):
	return (a**2 + b**2 + c**2)/(a*b*c) + sqrt(a*b*c) # function f(a,b,c) can be modified
a = int(input()); b = int(input()); c = int(input())
print(algebraic_expression(a,b,c))