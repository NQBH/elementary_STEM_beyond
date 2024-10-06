file_in = open("string_compression.inp")
file_out = open("string_compression.out", "w")
s = file_in.readline()
i = 0
ans = ""
while i < len(s):
	temp = s[i]
	count = 0
	while temp == s[i]:
		i += 1
		count += 1
		if i == len(s):
			break
	ans += str(count) + temp
file_out.write(ans)
file_in.close()
file_out.close()