// implementing a singly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node
{
    int val;
    node_t* next;
};

void PrintLL(node_t* head)
{
    node_t* temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    
}

int main()
{
    node_t n1, n2, tail;
    node_t* head;
    
    n1.val = 5;
    n2.val = 10;
    tail.val = 50;
    
    head = &n1;
    n1.next = &n2;
    n2.next = &tail;
    tail.next = NULL;

    PrintLL(head);

    return 0;
}
