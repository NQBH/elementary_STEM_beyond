from math import gcd
frac = input()
frac = frac.split("/")
num = int(frac[0])
den = int(frac[1])
gcd = gcd(num, den)
num = int(num/gcd)
den = int(den/gcd)
print(str(num) + "/" + str(den))