/*
target tee:
        1
       / \
      2   3
     / \   
    4   5

    preorder --> 1,2,4,5,3
    inroder  --> 4,2,5,1,3
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node* left_child;
    struct node* right_child;
}node_t;

node_t* new_Node(int val)
{
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value       = val;
    newNode->left_child  = NULL;
    newNode->right_child = NULL;

    return newNode;
}

void preorder_traverse(node_t* root)
// root, left, right
{
    if (root == NULL)
    {
        return;
    }
    printf("%d -> ", root->value);
    preorder_traverse(root->left_child);
    preorder_traverse(root->right_child);
}

void inorder_traversal(node_t* root)
// left, root, right
{
    if (root == NULL)
    {
        return;
    }

    inorder_traversal(root->left_child);
    printf("%d ->" , root->value);
    inorder_traversal(root->right_child);
}


int main()
{
    node_t* root = new_Node(1);
    root->left_child = new_Node(2);
    root->right_child = new_Node(3);
    root->left_child->left_child = new_Node(4);
    root->left_child->right_child = new_Node(5);

    printf("preorder traversal: ");
    preorder_traverse(root);
    printf("\n");
    printf("inorder traversak: ");
    inorder_traversal(root);

    return 0;
}