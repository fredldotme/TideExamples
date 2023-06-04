#include <stdlib.h>
#include <stdio.h>

#include "lib.h"

void initNode(Node** node) {
    *node = new Node;

    (*node)->left = NULL;
    (*node)->right = NULL;
    (*node)->val = rand();
}

void walkTree(Node* node) {
    printf("Value: %d\n", node->val);

    if(node->left) {
        printf("Going left\n");
        walkTree(node->left);
    }
    if (node->right) {
        printf("Going right\n");
        walkTree(node->right);
    }
}