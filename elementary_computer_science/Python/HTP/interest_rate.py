inp_f = open('bl2.inp')
out_f = open('bl2.out','w')
t = inp_f.read()
T = t.split(' ')
c, t, A, k, h = int(T[0]),int(T[1]),int(T[2]),float(T[3]),float(T[4])
if c == 0 or t < c :
	S = A + (A*h/100)*t
elif t > c :
	S = (A*(1 + k/100)**c)*(1+(t-c)*h/100)
else:
	S = A*(1 + k/100)**t
out_f.write(str(round(S,1)))
inp_f.close()
out_f.close()