// array repr of a queue

#include <stdio.h>
#include <stdbool.h>

#define MAX_ELEMENTS 100
int intQueue[MAX_ELEMENTS];
int front = -1;
int rear  = -1;
int count = 0;

bool isEmpty();
bool isFull();
bool enqueue(int data);
bool dequeue();
void printQueue(int* start);

int main(void)
{
    bool x = isEmpty();
    printf("isEmpty: %i\n",x);
    
    bool y = isFull();
    printf("isFull: %i\n",y);

    return 0;
}

bool isEmpty()
{
    return count == 0;
}

bool isFull()
{
    return count == MAX_ELEMENTS;
}

bool enqueue(int data)
{
    if (rear == MAX_ELEMENTS - 1)
    {
        puts("Overflow Detected");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        intQueue[rear] = data;
        printf("%d added to queue.\n", data);
    }
}