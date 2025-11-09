#pylint: skip-file

# using lists as queues causes expensive dequeue for very large queues.
# better to use deque --> double ended queue
# internally is a block linked list
# <block 1> --- <block 2> ... --> blocks are arrays 
# linked list of arrays
# combines best of both worlds --> cache locality of arrays and quick inserts and pops of linked lists 
# dequeue ops like append and popleft are atomic
# safe for multithreaded producer consumer patterns

from collections import deque

def draw_q(q):
    print("queue: ")
    print(" -> ".join(q))

q = deque()

# enequeue --> O(1)
q.append('A')
q.append('B')
q.append('C')
q.append('D')

draw_q(q)

q.popleft() # dequeue --> O(1)
draw_q(q)

# peek --> O(1)
print("peek: ",q[0])