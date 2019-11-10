#ifndef _H_BSTTREE_H_
#define _H_BSTTREE_H_

typedef struct
{
    /* data */
    int data;
    struct BstNode *left;
    struct BstNode *right;
} BstNode;

BstNode *getNewNode(int data);
BstNode *findMin(BstNode *root);
BstNode *deleteNode(BstNode *root, int data);
BstNode *insertNode(BstNode *root, int data);
unsigned int searchNode(BstNode *root, int data);
void displayNode(BstNode *root);

#endif