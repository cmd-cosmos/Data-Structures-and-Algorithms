#pylint: skip-file

class Node:
    def __init__(self, data) -> None:
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self) -> None:
        self.head = None
        self.lst = []

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            self.lst.append(self.head.data)
            return
        curr = self.head
        while curr.next:
            curr = curr.next
        curr.next = new_node
        self.lst.append(new_node.data)

    def printLL(self):
        curr = self.head
        while curr:
            print(curr.data, end=" -> ")
            curr = curr.next
        print("None")
        print("ll data arr.: ",self.lst)

    def insertAtHead(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            self.lst.append(self.head.data)
            return
        temp = self.head
        self.head = newNode
        newNode.next = temp
        self.lst.append(newNode.data)

    # def fillArr(self):
    #     curr = self.head
    #     if curr is None:
    #         self.lst.append(None)
    #     while curr.next:
    #         self.lst.append(curr.data)


    def deleteNode(self, data):
        if data not in self.lst:
            print(f"{data} not in linked list.")
            return
        curr = self.head
        prev = None

        self.lst.remove(data)
        while curr:
            if curr.data == data:
                if prev is None:
                    self.head = curr.next
                else:
                    prev.next = curr.next
                return
            prev = curr
            curr = curr.next




ll = LinkedList()

ll.append(1)
ll.append(2)
ll.append(3)
ll.append(4)

ll.printLL()   

ll.insertAtHead(200)

ll.printLL()

ll.deleteNode(1000)
ll.deleteNode(1)

ll.printLL()

