#ifndef DOUBLYLL_h
#define DOUBLYLL_h

#include <stdio.h>
#include <stdlib.h>

typedef struct node node_t;
typedef struct doublyLL doublyLL_t;

int initList(doublyLL_t* list, int count, ...);

int addToFront(doublyLL_t* list, int node);

int addToEnd(doublyLL_t* list, int node);

int addBetween(doublyLL_t* list, node_t* pos, int node);

void printDLL(doublyLL_t list);

node_t* findNode(doublyLL_t list, int node);

int deleteNode(doublyLL_t* list, node_t* node);

#endif
