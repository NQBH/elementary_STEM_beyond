from random import *
file_in = open('random_sequence.inp', 'w+')
file_out = open('random_sequence.out', 'w')
n = int(input('Enter n: '))
s = ''
for i in range(n):
	temp = randint(0, 9)
	s += str(temp) + ' '
file_in.write(s)
file_in.seek(0)
c = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
data = file_in.readline()
data = data.split()
data.sort()
print(data)
for x in list(data):
	i = int(x)
	c[i] += 1
file_out.write(' '.join(data))
for x in list(c):
	file_out.write(('\n' + str(x)))
file_in.close()
file_out.close()