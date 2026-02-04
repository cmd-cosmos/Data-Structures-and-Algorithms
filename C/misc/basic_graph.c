// using a 2D arr to repr a graph using adjacency matrix
#include <stdio.h>

#define MAX_NODES 5

int main(void)
{
    int graph[MAX_NODES][MAX_NODES] = {
        {0, 1, 0, 0, 1}, // edge from node 0
        {1, 0, 1, 0, 0}, // edge from node 1
        {0, 1, 0, 1, 0}, // edge from node 2
        {0, 0, 1, 0, 1}, // edge from node 3
        {1, 0, 0, 1, 0}  // edge from node 4
    };

    puts("edges of graph: ");
    for (int i = 0; i < MAX_NODES; i++)
    {
        for (int j = 0; j < MAX_NODES; j++)
        {
            if (graph[i][j] == 1)
            {
                printf("%d -> %d\n",i,j);
            }
        }
    }

    return 0;
}