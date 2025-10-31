# implementing a heap
#pylint: skip-file
# heaps --> useful for implementing priority queues and faster than trees in some applications
# min heap implementation

from typing import Optional

    
class MinHeap:
    def __init__(self, nodes) -> None:
        self.heapArr = []
        for node in nodes:
            self._add(node)

    def __len__(self):
        return len(self.heapArr)
    
    def __str__(self) -> str:
        return f"Heap: {self.heapArr}"
    
    # Helper Function    
    def _parent(self, idx):
        return (idx-1) // 2
    
    def _left(self, idx):
        return (2*idx) + 1

    def _right(self, idx):
        return (2*idx) + 2
    
    def _hasLeftChild(self, parentIndex):
        return self._left(parentIndex) < len(self.heapArr)
        
    def _hasRightChild(self, parentIndex):
        return self._right(parentIndex) < len(self.heapArr)
    
    def _hasParent(self, childIndex):
        return self._parent(childIndex) >= 0
    
    def _getParentVal(self, index):
        if not self._hasParent(index):
            return None
        return self.heapArr[self._parent(index)]

    def _root(self):
        return self.heapArr[0] if self.heapArr else None
    
    def isEmpty(self):
        return not self.heapArr
    # Heap Insertion Operation Functions
    
    def _swap(self, childIdx, parentIdx):
        if childIdx >= len(self.heapArr) or parentIdx >= len(self.heapArr):
            print("Swap Error")
            return
        self.heapArr[childIdx], self.heapArr[parentIdx] = self.heapArr[parentIdx], self.heapArr[childIdx]
    
    def _heapify_up(self, child: Optional[int] = None):
        if child is None:
            child = len(self.heapArr) - 1
        parentIdx = self._parent(child)

        if parentIdx >= 0 and self.heapArr[child] < self.heapArr[parentIdx]:
            self._swap(child, parentIdx)
            self._heapify_up(child=parentIdx)
        return self.heapArr

    def _add(self, node):
        self.heapArr.append(node)
        self._heapify_up()

    


nodeArr = [10, 20, 100, 70, 80, 90]

minHeap = MinHeap(nodes=nodeArr)
print(minHeap)
print("is-empty flag: ", minHeap.isEmpty())
