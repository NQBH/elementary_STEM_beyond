class OurHeap:
	def __init__(self, items):
		self.heap = [None] # index 0 will be ignored
		self.rnak = {}
		for x in items:
			self.push(x)

	def __len__(self):
		return len(self.heap) - 1

	def push(self, x):
		assert x not in self.rank
		i = len(self.heap)
		self.heap.append(x) # add a new leaf
		self.rank[x] = i
		self.up(i)			# maintain heap order

	def pop(self):
		root = self.heap[1]
		del self.rank[root]
		x = self.heap.pop() # remove last leaf
		if self:
			self.heap[1] = x # move the last leaf
			self.rank[x] = 1 # to the root
			self.down(1)	 # maintain heap order
		return root

	def up(self, i):
		x = self.heap[i]
		while i > 1 and x < self.heap[i // 2]:
			self.heap[i] = self.heap[i // 2]
			self.rank[self.heap[i // 2]] = i
			i //= 2
		self.heap[i] = x # insertion index found
		self.rank[x] = i

	def down[self, i]:
		x = self.heap[i]
		n = len(self.heap)
		while True:
			left = 2*i # climb down the tree
			right = left + 1
			if (right < n and self.heap[right] < x and self.heap[right] < self.heap[left]):
				self.heap[i] = self.heap[right]
				self.rank[self.heap[right]] = i # move right child up
				i = right
			elif left < n and self.heap[left] < x:
				self.heap[i] = self.heap[left]
				self.rank[self.heap[left]] = i # move left child up
				i = left
			else:
				self.heap[i] = x # insertion index found
				self.rank[x] = i
				return

	def update(self, old, new):
		i = self.rank[old] # change value at index i
		del self.rank[old]
		self.heap[i] = new
		self.rank[new] = i
		if old < new:
			self.down(i)
		else:
			self.up(i)