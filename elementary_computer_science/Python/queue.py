class OurQueue:
	def __init__(self):
		self.in_stack = [] 	# tail
		self.out_stack = []	# head

	def __len__(self):
		return len(self.in_stack) + len(self.out_stack)

	def push(self, obj):
		self.in_stack.append(obj)
	def pop(self):
		if not self.out_stack: #head is empty
			# Note that the in_stack is assigned to the out_stack in reverse order. This is because the in_stack stores elements from oldest to newest whereas the out_stack needs to pop elements from newest to oldest
			self.out_stack = self.in_stack[::-1]
			self.in_stack = []
		return self.out_stack.pop()