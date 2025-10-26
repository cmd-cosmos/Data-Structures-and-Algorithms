# implementing a heap
#pylint: skip-file

# min heap

class Node:
    def __init__(self, val) -> None:
        self.val = val
        self.left = None
        self.right = None

    def __repr__(self) -> str:
        return f"Node(val: {self.val}, left: {self.left}, right: {self.right})"
    
class MinHeap:
    def __init__(self, nodes) -> None:
        self.root = None
        self.heapArr = []
        for node in nodes:
            self._add(node)

    def __len__(self):
        return len(self.heapArr)
    
    def __str__(self) -> str:
        return f"Heap: {self.heapArr}"
    
    def _parent(self, idx):
        return (idx-1) // 2
    
    def _left(self, idx):
        return (2*idx) + 1

    def _right(self, idx):
        return (2*idx) + 2
        
    def _root(self):
        return self.heapArr[0] if self.heapArr else None
    
    def _heapify_up(self):
        pass

    def _add(self, node):
        self.heapArr.append(node)
        self._heapify_up()

    

node1 = Node(10)
node2 = Node(20)
node3 = Node(50)
node4 = Node(100)
node5 = Node(30)
node6 = Node(40)
node7 = Node(70)
nodeArr = [node1, node2, node3, node4]

minHeap = MinHeap(nodes=nodeArr)


