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

    def delete_node(self, node):
        if node in self.graph:
            for neighbors in list(self.graph[node]):
                self.graph[neighbors].remove(node)
            del self.graph[node]
    
    def delete_edge(self, n1, n2):
        if n1 in self.graph and n2 in self.graph[n1]:
            self.graph[n1].remove(n2)
        if n2 in self.graph and n1 in self.graph[n2]:
            self.graph[n2].remove(n1)

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

graph.delete_node(1)
graph.delete_edge(2,4)

graph.display()

not_connected_graph = Graph()
not_connected_graph.add_nodes(10)
not_connected_graph.add_nodes(22)
not_connected_graph.add_nodes(31)

not_connected_graph.display()
