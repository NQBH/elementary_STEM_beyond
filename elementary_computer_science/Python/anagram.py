def anagrams(S): # S is a set of strings
	d = {} 		 # maps s to list of words with signature s
	for word in S: # group words according to the signature
		s = ''.join(sorted(word)) # calculate the signature
		if s in d:
			if not(word in d[s]):
				d[s].append(word) # append a word to an existing signature
		else:
			d[s] = [word] # add a new signature and its first word
	# extract anagrams, ingoring anagram groups of size 1
	return [d[s] for s in d if len(d[s]) > 1]

S = list(map(str, input().split()))
print(anagrams(S))