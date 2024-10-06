from math import *
file_in = open("allocation.inp")
file_out = open("allocation.out", "w")
t = int(file_in.readline())
for i in range(1, t + 1):
	nb = file_in.readline()
	nb = nb.split()
	n = int(nb[0])
	b = int(nb[1])
	a = file_in.readline()
	a = a.split()
	a.sort()
	money = 0
	y = 0
	for y in range(len(a)):
		money += int(a[y])
		if money > b:
			break
	if i < t:
		file_out.write('Case #' + str(i) +': ' + str(y) +'\n')
	else:
		file_out.write('Case #' + str(i) +': ' + str(y))
file_in.close()
file_out.close()