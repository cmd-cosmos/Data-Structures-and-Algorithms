// array repr of a queue

#include <stdio.h>
#include <stdbool.h>

#define MAX_ELEMENTS 100
int intQueue[MAX_ELEMENTS];
int front = 0;
int rear  = -1;
int count = 0;

bool isEmpty();
bool isFull();
bool enqueue(int data);
bool dequeue();
void printQueue(int* start);
int size();

int main(void)
{
    bool x = isEmpty();
    printf("%i",x);
    return 0;
}

bool isEmpty()
{
    return count == 0;
}