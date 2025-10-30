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

node_t* recursiveInsert(node_t* root, int val)
{
    if (root == NULL)
    {
        return newNode(val);
    }
    if (val <= root->val)
    {
        root->left = recursiveInsert(root->left, val);
    }
    else
    {
        root->right = recursiveInsert(root->right, val);
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

void inOrder(node_t* root)
// left -> node -> right
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    printf("%d -> ", root->val);
    inOrder(root->right);
}

void postOrder(node_t* root)
// left -> right -> node
{
    if (root == NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    printf("%d -> ", root->val);
}

int main()
{
    node_t* rootNode = NULL;

    rootNode = recursiveInsert(rootNode, 30);
    rootNode = recursiveInsert(rootNode, 10);
    rootNode = recursiveInsert(rootNode, 20);
    rootNode = recursiveInsert(rootNode, 5);
    rootNode = recursiveInsert(rootNode, 50);
    rootNode = recursiveInsert(rootNode, 40);
    rootNode = recursiveInsert(rootNode, 90);

/*
        30
      /   \
     10    50
    /\     / \
   5  20  40  90
*/

    printf("pre order traversal: ");
    preOrder(rootNode);
    printf("\n");

    printf("in order traversal: ");
    inOrder(rootNode);
    printf("\n");

    printf("post order traversal: ");
    postOrder(rootNode);
    printf("\n");

    return 0;
}

