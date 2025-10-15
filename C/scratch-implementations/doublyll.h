#ifndef DOUBLYLL_h
#define DOUBLYLL_h

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
} node_t;

typedef struct doublyLL
{
    node_t* head;
    node_t* tail;
}doublyLL_t;

int initList(doublyLL_t* list, int count, ...)
{
    list->head = list->tail = NULL;

    va_list number;
    va_start(number, count);

    for (int i = 0; i < count; ++i)
    {
        addToEnd(list, va_arg(number, int));
    }

    va_end(number);

    return 0;
}

int addToFront(doublyLL_t* list, int node)
{
    if (list == NULL) return -1;

    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) return -2;

    newNode->prev = newNode->next = NULL;
    newNode->data = node;

    if (list->head)
    {
        list->head->prev = newNode;
        newNode->next = list->head;
        list->head = newNode;
    }
    else
    {
        list->head = list->tail = newNode;
    }

    return 0;
}

int addToEnd(doublyLL_t* list, int node)
{
    if (list == NULL) return -1;

    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) return -2;

    newNode->prev = newNode->next = NULL;
    newNode->data = node;

    if (list->tail)
    {
        list->tail->next = newNode;
        newNode->prev = list->tail;
        list->tail = newNode;
    }
    else
    {
        list->head = list->tail = newNode;
    }

    return 0;
}

int addBetween(doublyLL_t* list, node_t* pos, int node)
{
    if (list == NULL) return -1;
    if (pos == NULL) return addToEnd(list, node);

    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    if (newNode == NULL) return -2;

    newNode->prev = newNode->next = NULL;
    newNode->data = node;

    newNode->next = pos;
    newNode->prev = pos->prev;

    if (pos->prev)
    {
        pos->prev->next = newNode;
    }
    pos->prev = newNode;

    return 0;
}

void printDLL(doublyLL_t list)
{
    node_t* curr = list.head;

    fputs("[ ", stdout);

    while (curr)
    {
        printf("%d", curr->data);
        curr = curr->next;
    }

    fputs("]\n", stdout);
    fflush(stdout);
    
}


node_t* findNode(doublyLL_t list, int node)
{
    node_t* curr = list.head;

    while (curr)
    {
        if (curr->data = node)
        {
            return curr;
        }
        curr = curr->next;
    }
    return NULL;
}

int deleteNode(doublyLL_t* list, node_t* node)
{
    if (node == NULL) return -1;
    if (list == NULL) return -2;

    if (node->prev)
    {
        node->prev->next = node->next;
    }
    else
    {
        list->head = node->next;
    }
    if (node->next)
    {
        node->next->prev = node->prev;
    }
    else
    {
        list->tail = node->prev;
    }

    free(node);
    return 0;
}

#endif
