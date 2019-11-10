#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc, char** argv){

    BstNode *root = NULL;    
	root = insertNode(root,5); 
    root = insertNode(root,10);
	root = insertNode(root,3); 
    root = insertNode(root,4); 
	root = insertNode(root,1); 
    root = insertNode(root,11);

	// Deleting node with value 5, change this value to test other cases
	root = deleteNode(root,5);

	//Print Nodes in Inorder
	displayNode(root);
    return 0;

}
