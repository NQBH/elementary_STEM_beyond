def anagram(S):
	d = {}
	for word in S:
		s = ''.join(sorted(word))
		if s in d:
			d[s].append(word)
		else:
			d[s] = [word]
	return [d[s] for s in d if len(d[s]) > 1]

S = "below the car is a rat drinking cider and bending its elbow while this thing is an arc that can act like a cat which cried during the night caused by pain in its bowel"
print(anagram(S))
# Wrong Ans