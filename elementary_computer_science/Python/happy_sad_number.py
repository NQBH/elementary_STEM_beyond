max_iter = 1000
def sum_digit_sqr(n):
	sum = 0 
	for i in str(n):
		sum += int(i)**2
	return sum
n0 = n = int(input())
count = 0
while n > 1 and count <= max_iter:
	n = sum_digit_sqr(n)
	print(n)
	count += 1
if n == 1:
	print(n0, " is a happy number.")
elif n == 0:
	print(n0, " is a sad number.")
else:
	print(n0, " is neither a happy nor a sad number.")