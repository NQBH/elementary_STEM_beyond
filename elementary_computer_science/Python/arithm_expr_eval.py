def arithm_expr_eval(cell, expr):
	if isinstance(expr, tuple):
		(left, operand, right) = expr
		lval = arithm_expr_eval(cell, left)
		rval = arithm_expr_eval(cell, right)
		if operand == '+':
			return lval + rval
		if operand == '-':
			return lval - rval
		if operand == '*':
			return lval * rval
		if operand == '/':
			return lval // rval
	elif isinstance(expr, int):
		return expr
	else:
		cell[expr] = arithm_expr_eval(cell, cell[expr])
		return cell[expr]

PRIORITY = {';': 0, '(': 1, ')': 2, '-': 3, '+': 3, '*': 4, '/': 4}

def arithm_expr_parse(line_tokens):
	vals = []
	ops = []
	for tok in line_tokens + [';']:
		if tok in PRIORITY: # tok is an operator
			while (tok != '(' and ops and PRIORITY[ops[-1]] >= PRIORITY[tok]):
				right = vals.pop()
				left = vals.pop()
				vals.append((left, ops.pop(), right))
			if tok == ')':
				ops.pop() # this is the corresponding '('
			else:
				ops.append(tok)
		elif tok.isdigit(): # tok is an integer
			vals.append(int(tok))
		else: # tok is an identifier
			vals.append(tok)
	return vals.pop()