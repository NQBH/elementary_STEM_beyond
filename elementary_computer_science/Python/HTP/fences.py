t = list(map(int, input().split()))[:2]
m = t[0]
n = t[1]
S = m*(n + 1) + n*(m + 1)
print(S)