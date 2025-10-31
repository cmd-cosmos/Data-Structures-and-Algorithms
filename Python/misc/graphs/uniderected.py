#pylint: skip-file

# undirected: 2 way node traversal
#             a -> b, b -> a
# adjacency list --> efficient graph repr for sparse graphs
# adjacency matrix --> easier to visualize but expensive in terms of mem

# adjacency list 
class Graph:
    def __init__(self) -> None:
        self.graph = {}

    def add_nodes(self, node):
        # nodes/vertices
        if node not in self.graph:
            self.graph[node] = []
        
    def add_edge(self, n1, n2):
        # n1 and n2 are nodes
        if n1 not in self.graph:
            self.add_nodes(n1)
        if n2 not in self.graph:
            self.add_nodes(n2)
        self.graph[n1].append(n2)
        self.graph[n2].append(n1)

    def display(self):
        for node, neighbors in self.graph.items():
            print(f"{node} : {neighbors}")

graph = Graph()

#     1----------3
#     \       /
#      2-----4

graph.add_edge(1, 3)
graph.add_edge(1, 2)
graph.add_edge(2, 4)
graph.add_edge(3, 4)

graph.display()
