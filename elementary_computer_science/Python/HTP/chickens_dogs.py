inp_f = open('toanco.inp')
out_f = open('toanco.out','w')
t = inp_f.read()
T = t.split(' ')
x = int(T[0])
y = int(T[1])
dogs = (100 - x*2) // 2
chicken = x - dogs
out_f.write(f'{chicken} {dogs}')
inp_f.close()
out_f.close()