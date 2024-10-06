file_in = open("missing_number.inp")
file_out = open("missing_number.out", "w")
n = int(file_in.readline())
data = file_in.readline()
A = data.split()
A = [int(i) for i in A]
A.sort()
for i in range(n-1):
	if i + 1 != A[i]:
		file_out.write(str(i + 1))
		break
file_in.close()
file_out.close()