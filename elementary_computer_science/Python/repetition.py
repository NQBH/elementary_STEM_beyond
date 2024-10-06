DNA = input()
DNA_count = []
count = 1
char = DNA[0]
for i in range(1, len(DNA)):
	if DNA[i] == DNA[i-1]:
		count = count + 1
	else:
		DNA_count.append(count)
		count = 1
DNA_count.append(count)
print(max(DNA_count))