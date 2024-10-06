from collections import defaultdict
nb_edges = int(input())
g = defaultdict(dict)
for _ in range(nb_edges):
	u, v, weight = input().split()
	g[u][v] = int(weight)
	# g[v][u] = int(weight) # For an undirected graph