#include <stdio.h>
#include "tree.h"

BstNode *
getNewNode(int data)
{
    BstNode *root = (BstNode *)malloc(sizeof(BstNode));
    root->left = NULL;
    root->right = NULL;
    return root;
}

BstNode *findMin(BstNode *root)
{
    while (root != NULL)
        root = root->left;
    return root;
}

BstNode *deleteNode(BstNode *root, int data)
{
    if (root == NULL)
        return root; /* Empty node */
    else if (data < root->data)
        root = deleteNode(root->left, data); /* Search left */
    else if (data > root->data)
        root = deleteNode(root->right, data); /* Search right */
    /* found the node, there are 3 case */
    else
    {
        // Case 1, No child
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            root = NULL;
        }
        // Case 2, one child
        else if (root->right == NULL)
        {
            BstNode *temp = root;
            root = root->left;
            free(temp);
        }
        else if (root->left == NULL)
        {
            BstNode *temp = root;
            root = root->right;
            free(temp);
        }
        // Case 3, two child
        else
        {
            BstNode *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, data);
        }
    }
    return root;
}

BstNode *insertNode(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = getNewNode(data);
    }
    else if (root->data <= data)
    {
        root->left = insertNode(root->left, data);
    }
    else
    {
        root->right = insertNode(root->right, data);
    }

    return root;
}

unsigned int searchNode(BstNode *root, int data)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->data == data)
    {
        return 1;
    }
    else if (data < root->data)
        return searchNode(root->left, data);

    else
    {
        return searchNode(root->right, data);
    }
}

void displayNode(BstNode *root)
{
    if (root == NULL)
    {
        printf("do nothing\n");
        return;
    }

    displayNode(root->left);
    printf("%d ", root->data);
    displayNode(root->right);
}