file_in = open("multiplier_square.inp")
file_out = open("multiplier_square.out", "w")
n = int(file_in.readline())
data = file_in.readline()
A = data.split()
print(A)
rem = 0 # remainder
a = 1
while 1:
	for i in range(0, n):
		temp = int(A[i])
		if a**2 % temp != 0:
			break
	if i == n - 1 and (a**2) % temp == 0:
		rem = a**2 % (10**9 + 7)
		file_out.write(str(rem))
		break
	else:
		a += 1
file_in.close()
file_out.close()