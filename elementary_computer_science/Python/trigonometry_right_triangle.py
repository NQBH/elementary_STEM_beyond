from math import sqrt
# List of available variables: a b c b' c' h p P S r R sinB cosB tanB cotB sinC cosC tanC cotC ma mb mc da db dc
def trigonometry_right_triangle(data, value):
	value = value.split()
	if data == 'b c':
		b = float(value[0])
		c = float(value[1])
		S = b*c/2
		a = sqrt(b**2 + c**2)
		P = a + b + c
		p = P/2
		h = b*c/a
		b_proj = b**2/a
		c_proj = c**a/a
		print(f"a = {a}, b = {b}, c = {c}, h = {h}, b' = {b_proj}, c' = {c_proj}, P = {P}, p = {p}, S = {S}.")
	if data == 'a b':
		a = float(value[0])
		b = float(value[1])
		c = sqrt(a**2 - b**2)
		S = b*c/2
		P = a + b + c
		p = P/2
		h = b*c/a
		b_proj = b**2/a
		c_proj = c**a/a
		print(f"a = {a}, b = {b}, c = {c}, h = {h}, b' = {b_proj}, c' = {c_proj}, P = {P}, p = {p}, S = {S}.")
	if data == 'a c':
		a = float(value[0])
		c = float(value[1])
		b = sqrt(a**2 - c**2)
		S = b*c/2
		P = a + b + c
		p = P/2
		h = b*c/a
		b_proj = b**2/a
		c_proj = c**a/a
		print(f"a = {a}, b = {b}, c = {c}, h = {h}, b' = {b_proj}, c' = {c_proj}, P = {P}, p = {p}, S = {S}.")
	if data == "a b'":

	if data == "a c'":

data = input() # 2 of a b c b' c' h p S r
value = input() # values of given 2 measures
trigonometry_right_triangle(data, value)