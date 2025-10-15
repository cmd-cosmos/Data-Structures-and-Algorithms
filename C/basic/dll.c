// doubly linked lists
#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;

struct node
{
    int val;
    node_t* prev;
    node_t* next;
};

void PrintLL(node_t* head)
{
    node_t* temp = head;

    while (temp != NULL)
    {
        printf("%d <-> ", temp->val);
        temp = temp->next;
    }
    
}

int main()
{
    node_t head, n1, n2, n3, tail;

    head.val = 0;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    tail.val = 1000;
    
    head.next = &n1;
    head.prev = NULL;
    
    n1.next = &n2;
    n1.prev = &head;

    n2.next = &n3;
    n2.prev = &n2;

    n3.next = &tail;
    n3.prev = &n2;

    tail.prev = &n3;
    tail.next = NULL;

    node_t* ptr = &head;

    printf("print seq 1:\n");
    PrintLL(ptr);

    // printf("\n");
    // printf("print seq2:\n");   

    return 0;
}