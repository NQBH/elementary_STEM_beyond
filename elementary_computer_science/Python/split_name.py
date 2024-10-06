def split_name(s):
	A = s.split()
	family_name, *middle_name, first_name = A;
	middle_name = " ".join(middle_name)
	return family_name, middle_name, first_name
s = input()
print(split_name(s))