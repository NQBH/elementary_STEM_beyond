def solve_quadratic_eqn(a, b, c, reduce_flag): # reduce_flag = 0: standard Delta, reduce_flag = 1: reduced Delta' = Delta/2
	# representation of coefficients
	if b == 0: b_show = ''
	elif b == 1: b_show = 'x'
	elif b == -1: b_show = '- x'
	elif b > 0: b_show = f'+ {b}x'
	else: b_show = f'- {-b}x'
	if c == 0: c_show = ''
	elif c > 0: c_show = f'+ {c}'
	else: c_show = f'- {-c}'
	# 1ST-ORDER/LINEAR EQUATION 0x^2 + bx + c = 0
	if a == 0: # reduce to 1st-order/linear equation bx + c = 0
		if b == c == 0:
			print('Equation f(x) = 0x^2 + 0x + 0 = 0 for all x in R. Set of root: S = R.')
			print('min f(x) = max f(x) = 0 <=> x in R.')
		if b == 0 and c != 0:
			print(f'Equation f(x) = 0x^2 + 0x {c_show} = {c} = 0 for all x in R. Set of root: S = empty set.')
			print(f'f(x) = {c} for all x in R => min f(x) = max f(x) = {c}')
		if b != 0:
			print(f'Equation f(x) = 0x^2 {b_show} {c_show} = 0 has only 1 root: x = {-c / b}')
			print(f'f(x) = {b_show} {c_show} has no maximum & no minimum values.')
	# 2ND-ORDER/QUADRATIC EQUATION ax^2 + bx + c = 0
	elif reduce_flag == 0: # solve full 2nd-order/quadratic equation ax^2 + bx + c = 0, a != 0 with standard discriminant Delta
		# representation of coefficients
		if a == 1: a_show = ''
		elif a == -1: a_show = '-'
		else: a_show = a
		# discriminant & extreme point
		Delta = b * b - 4 * a * c # discriminant of quadratic equation
		extreme_point = -b / (2 * a) # extreme point x = -b/(2a)
		extreme_point_abs = abs(extreme_point)
		extreme_point_sign = '-' if extreme_point >= 0 else '+'
		extreme_val = -Delta / (4 * a) # extreme value y = -Delta/(4a) = (4ac - b^2)/(4a)
		extreme_val_sign = '+' if extreme_val >= 0 else '-'
		extreme_val_abs = abs(extreme_val)
		# monotonicity of quadratic polynomial f(x) = ax^2 + bx + c
		if a < 0:
			print(f'The graph of the function f(x) = {a_show}x^2 {b_show} {c_show} is a downward parabola.')
			print(f'Monotonicity: f(x) = {a_show}x^2 {b_show} {c_show} strictly increases when x < {extreme_point} & strictly decreases when x > {extreme_point}.')
		else:
			print(f'The graph of the function f(x) = {a_show}x^2 {b_show} {c_show} is an upward parabola.')
			print(f'Monotonicity: f(x) = {a_show}x^2 {b_show} {c_show} strictly decreases when x < {extreme_point} & strictly increases when x > {extreme_point}.')
		if Delta < 0:
			# roots of quadratic equation ax^2 + bx + c = 0
			print(f'Discriminant Delta = {Delta} < 0.')
			print(f'Equation {a_show}x^2 {b_show} {c_show} = 0 has no real root & has 2 complex roots:')
			print(f'  x1 = {extreme_point} - {(-Delta) **.5 / (2 * abs(a))}i,')
			print(f'  x2 = {extreme_point} + {(-Delta) **.5 / (2 * abs(a))}i.')
			# representation of quadratic polynomial ax^2 + bx + c = a(x + b/(2a))^2 - Delta/(4a)
			if a < 0:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} <= {extreme_val} < 0 for all x in R.')
				print(f'=> max f(x) = -Delta/(4a) = {extreme_val} <=> x = -b/(2a) = {extreme_point}.')
				print(f'Sign: f(x) < 0 for all x in R.')
			else:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} >= {extreme_val} for all x in R.')
				print(f'=> min f(x) = -Delta/(4a) = {extreme_val} <=> x = -b/(2a) = {extreme_point}.')	
		elif Delta == 0:
			# roots of quadratic equation ax^2 + bx + c = 0
			print('Discriminant Delta = 0.')
			print(f'Equation {a_show}x^2 {b_show} {c_show} = 0 has only 1 real root: x = -b/(2a) = {extreme_point}.')
			# representation of quadratic polynomial ax^2 + bx + c = a(x + b/(2a))^2
			if a < 0:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a}(x {extreme_point_sign} {extreme_point_abs})^2 <= 0 for all x in R.')
				print(f'=> max f(x) = 0 <=> x = -b/(2a) = {extreme_point}.')
			else:
				print(f'{a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 >= 0 for all x in R.')
				print(f'=> min f(x) = 0 <=> x = -b/(2a) = {extreme_point}.')
		else: # Delta > 0
			# roots of quadratic equation ax^2 + bx + c = 0
			x1 = (-b - Delta ** .5) / (2 * a)
			x2 = (-b + Delta ** .5) / (2 * a)
			x1, x2 = min(x1, x2), max(x1, x2)
			x1_show = '-' if x1 >= 0 else '+'
			x2_show = '-' if x2 >= 0 else '+'
			x1_abs, x2_abs = abs(x1), abs(x2)
			print(f'Discriminant Delta = {Delta} > 0.')
			print(f'Equation {a_show}x^2 {b_show} {c_show} = 0 has 2 different real roots:')
			print(f'  x1 = {x1},')
			print(f'  x2 = {x2}.')
			if a < 0:
				# representation of quadratic polynomial ax^2 + bx + c = a(x + b/(2a))^2 - Delta/(4a)
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} <= {extreme_val} < 0 for all x in R.')
				print(f'=> max f(x) = -Delta/(4a) = {extreme_val} <=> x = -b/(2a) = {extreme_point}.')
				# sign of quadratic polynomial f(x) = ax^2 + bx + c = a(x - x1)(x - x2)
				print(f'Sign of f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {x1_show} {x1_abs})(x {x2_show} {x2_abs}):')
				print(f'  f(x) > 0 <=> {x1} < x < {x2}).')
				print(f'  f(x) >= 0 <=> {x1} <= x <= {x2}).')
				print(f'  f(x) < 0 <=> (x < {x1} or x > {x2}).')
				print(f'  f(x) <= 0 <=> (x <= {x1} or x >= {x2}).')
			else:
				# representation of quadratic polynomial ax^2 + bx + c = a(x + b/(2a))^2 - Delta/(4a)
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} >= {extreme_val} for all x in R.')
				print(f'=> min f(x) = -Delta/(4a) = {extreme_val} <=> x = -b/(2a) = {extreme_point}.')			
				# sign of quadratic polynomial f(x) = ax^2 + bx + c = a(x - x1)(x - x2)
				print(f'Sign of f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {x1_show} {x1_abs})(x {x2_show} {x2_abs}):')
				print(f'  f(x) < 0 <=> {x1} < x < {x2}.')
				print(f'  f(x) <= 0 <=> {x1} <= x <= {x2}.')
				print(f'  f(x) > 0 <=> (x < {x1} or x > {x2}).')
				print(f'  f(x) >= 0 <=> (x <= {x1} or x >= {x2}).')
	else: # solve full 2nd-order/quadratic equation ax^2 + bx + c = 0, a != 0 with reduced discriminant Delta'
		# representation of coefficients
		if a == 1: a_show = ''
		elif a == -1: a_show = '-'
		else: a_show = a
		if b == 0: b_show = ''
		elif b == 1: b_show = 'x'
		elif b == -1: b_show = '- x'
		elif b > 0: b_show = f'+ {b}x'
		else: b_show = f'- {-b}x'
		if c == 0: c_show = ''
		elif c > 0: c_show = f' + {c}'
		else: c_show = f'- {-c}'
		# discriminant & extreme point
		b_reduce = b / 2
		Delta_reduce = b_reduce * b_reduce - a * c # reduced discriminant of quadratic equation
		extreme_point = -b_reduce / a # extreme point x = -b'/a
		extreme_point_abs = abs(extreme_point)
		extreme_point_sign = '-' if extreme_point >= 0 else '+'
		extreme_val = -Delta_reduce / a # extreme value y = -Delta'/a = (ac - b'^2)/a
		extreme_val_sign = '+' if extreme_val >= 0 else '-'
		extreme_val_abs = abs(extreme_val)
		if Delta_reduce < 0:
			# roots of quadratic equation ax^2 + bx + c = 0
			print(f"Reduced discriminant Delta' = {Delta_reduce} < 0.")
			print(f'Equation {a_show}x^2 {b_show} {c_show} = 0 has no real root & has 2 complex roots:')
			print(f'  x1 = {extreme_point} - {(-Delta_reduce) **.5 / abs(a)}i,')
			print(f'  x2 = {extreme_point} + {(-Delta_reduce) **.5 / abs(a)}i.')
			# representation of quadratic polynomial ax^2 + bx + c = a(x + b'/a)^2 - Delta'/a
			if a < 0:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} <= {extreme_val} < 0 for all x in R.')
				print(f"=> max f(x) = -Delta'/a = {extreme_val} <=> x = -b'/a = {extreme_point}.")
				print(f'Sign: f(x) < 0 for all x in R.')
			else:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} >= {extreme_val} for all x in R.')
				print(f"=> min f(x) = -Delta'/a = {extreme_val} <=> x = -b'/a = {extreme_point}.")	
		elif Delta_reduce == 0:
			# roots of quadratic equation ax^2 + bx + c = 0
			print('Discriminant Delta = 0.')
			print(f"Equation {a_show}x^2 {b_show} {c_show} = 0 has only 1 real root: x = -b'/a = {extreme_point}.")
			# representation of quadratic polynomial ax^2 + bx + c = a(x + b'/a)^2
			if a < 0:
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a}(x {extreme_point_sign} {extreme_point_abs})^2 <= 0 for all x in R.')
				print(f"=> max f(x) = 0 <=> x = -b'/a = {extreme_point}.")
			else:
				print(f'{a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 >= 0 for all x in R.')
				print(f"=> min f(x) = 0 <=> x = -b'/a = {extreme_point}.")
		else: # Delta > 0
			# roots of quadratic equation ax^2 + bx + c = 0
			x1 = (-b_reduce - Delta_reduce ** .5) / a
			x2 = (-b_reduce + Delta_reduce ** .5) / a
			x1, x2 = min(x1, x2), max(x1, x2)
			x1_show = '-' if x1 >= 0 else '+'
			x2_show = '-' if x2 >= 0 else '+'
			x1_abs, x2_abs = abs(x1), abs(x2)
			print(f"Reduced discriminant Delta' = {Delta_reduce} > 0.")
			print(f'Equation {a_show}x^2 {b_show} {c_show} = 0 has 2 different real roots:')
			print(f'  x1 = {x1},')
			print(f'  x2 = {x2}.')
			if a < 0:
				# representation of quadratic polynomial ax^2 + bx + c = a(x + b'/a)^2 - Delta'/a
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} <= {extreme_val} < 0 for all x in R.')
				print(f"=> max f(x) = -Delta'/a = {extreme_val} <=> x = -b'/a = {extreme_point}.")
				# sign of quadratic polynomial f(x) = ax^2 + bx + c = a(x - x1)(x - x2)
				print(f'Sign of f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {x1_show} {x1_abs})(x {x2_show} {x2_abs}):')
				print(f'  f(x) > 0 <=> {x1} < x < {x2}).')
				print(f'  f(x) >= 0 <=> {x1} <= x <= {x2}).')
				print(f'  f(x) < 0 <=> (x < {x1} or x > {x2}).')
				print(f'  f(x) <= 0 <=> (x <= {x1} or x >= {x2}).')
			else:
				# representation of quadratic polynomial ax^2 + bx + c = a(x + b'/a)^2 - Delta'/a
				print(f'f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {extreme_point_sign} {extreme_point_abs})^2 {extreme_val_sign} {extreme_val_abs} >= {extreme_val} for all x in R.')
				print(f"=> min f(x) = -Delta'/a = {extreme_val} <=> x = -b'/a = {extreme_point}.")			
				# sign of quadratic polynomial f(x) = ax^2 + bx + c = a(x - x1)(x - x2)
				print(f'Sign of f(x) = {a_show}x^2 {b_show} {c_show} = {a_show}(x {x1_show} {x1_abs})(x {x2_show} {x2_abs}):')
				print(f'  f(x) < 0 <=> {x1} < x < {x2}.')
				print(f'  f(x) <= 0 <=> {x1} <= x <= {x2}.')
				print(f'  f(x) > 0 <=> (x < {x1} or x > {x2}).')
				print(f'  f(x) >= 0 <=> (x <= {x1} or x >= {x2}).')

a, b, c = map(float, input().split())
# last argument: 0: standard Delta, 1: reduced Delta' = Delta/2
solve_quadratic_eqn(a, b, c, 0)
solve_quadratic_eqn(a, b, c, 1)