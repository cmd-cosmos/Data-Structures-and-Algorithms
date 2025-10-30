#include <stdio.h>
#include <stdlib.h>

typedef struct Node node_t;

struct Node
{
    int val;
    node_t* left;
    node_t* right;
};

node_t* newNode(int data)
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->val   = data;
    newNode->left  = NULL;
    newNode->right = NULL;

    return newNode;
}

node_t* recursiveInsert(node_t* root, node_t* newNode)
{
    if (root == NULL)
    {
        return newNode;
    }
    if (newNode->val <= root->val)
    {
        root->left = recursiveInsert(root->left, newNode);
    }
    else
    {
        root->right = recursiveInsert(root->right, newNode);
    }
    return root;
}

void preOrder(node_t* root)
// node -> left -> right
{
    if (root == NULL)
    {
        return;
    }
    printf("%d -> ", root->val);
    preOrder(root->left);
    preOrder(root->right);
    
}


int main()
{
    node_t* rootNode = newNode(30);
    node_t* a = newNode(10);
    node_t* b = newNode(20);
    node_t* c = newNode(90);
    node_t* d = newNode(40);
    node_t* e = newNode(50);

    rootNode = recursiveInsert(rootNode, a);
    rootNode = recursiveInsert(rootNode, b);
    rootNode = recursiveInsert(rootNode, c);
    rootNode = recursiveInsert(rootNode, d);
    rootNode = recursiveInsert(rootNode, e);

    printf("pre order traversal: ");
    preOrder(rootNode);

    return 0;
}

