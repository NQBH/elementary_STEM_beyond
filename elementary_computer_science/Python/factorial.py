file_in = open("factorial.inp")
file_out = open("factorial.out", "w")
# Function: Compute factorial x!
def factorial(x):
	if x == 0 or x == 1:
		return 1
	else:
		return x*factorial(x - 1)
n = int(file_in.readline())
for i in range(n):
	a = int(file_in.readline())
	ans = factorial(a)
	if i > 0:
		file_out.write('\n')
	file_out.write(str(a) + '! = ' + str(ans))
file_in.close()
file_out.close()