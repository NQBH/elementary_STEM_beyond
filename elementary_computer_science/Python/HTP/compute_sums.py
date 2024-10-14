m = int(input())
A = list(map(int, input().split()))[:m]
n = int(input('n > 0: '))
while  n <= 0:
	n = int(input(' n > 0: '))
S_all = sum(A)
print(S_all)
S_odd, S_even, S_sqr, S_cb, S_nthp, S_sqrt, S_cbrt, S_nthrt = 0, 0, 0, 0, 0, 0, 0, 0
S_r, S_r_sqr, S_r_cb, S_r_nthp, S_r_sqrt, S_r_cbrt, S_r_nthrt = 0, 0, 0, 0, 0, 0, 0 
for i in A:
	if i % 2 == 0:
		S_even += i
	else:
		S_odd +=i
	S_sqr += i**2
	S_cb += i**3
	S_nthp += i**n
	S_sqrt += i**(1/2)
	S_cbrt += i**(1/3)
	S_nthrt += i**(1/n)
	S_r += 1/i # S_sqrt += i**-1
	S_r_sqr += 1/(i**2) # S_r_sqr += i**-2
	S_r_cb += 1/(i**3) # S_r_cb += i**-3
	S_r_nthp += 1/(i**n) # S_r_nthp += i**-n
	S_r_sqrt += 1/(i**(1/2)) # S_r_sqrt += i**(-1/2)
	S_r_cbrt += 1/(i**(1/3)) # S_r_cbrt += i**(-1/3)
	S_r_nthrt += 1/(i**(1/n)) # S_r_nthrt += i**(-1/n)
print(f'''
{S_odd}
{S_even}
{S_sqr}
{S_cb}
{S_nthp}
{S_sqrt}
{S_cbrt}
{S_nthrt}
{S_r}
{S_r_sqr}
{S_r_cb}
{S_r_nthp}
{S_r_sqrt}
{S_r_cbrt}
{S_r_nthrt}''')