def majority(L):
	count = {}
	for word in L:
		if word in count:
			count[word] += 1
		else:
			count[word] = 1
	# Using min() like this gives the first word with maximal count "for free"
	val_1st_max, arg_1st_max = min((-count[word], word) for word in count)
	return arg_1st_max