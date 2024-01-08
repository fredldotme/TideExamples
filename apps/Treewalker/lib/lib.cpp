#include <stdlib.h>
#include <stdio.h>

#include "lib.h"

Node* initNode(Node** node) {
    *node = new Node;

    (*node)->left = nullptr;
    (*node)->right = nullptr;
    (*node)->val = rand();

    return *node;
}

void walkTree(Node* node, int depth) {
    char prefix[depth + 1];
    for(int i = 0; i < depth; i++) {
        prefix[i] = ' ';
    }
    prefix[depth] = '\0';

    printf("%sValue: %d\n", prefix, node->val);
    fflush(stdin);

    if (node->left) {
        printf("%sGoing left\n", prefix);
        walkTree(node->left, depth + 1);
    }
    if (node->right) {
        printf("%sGoing right\n", prefix);
        walkTree(node->right, depth + 1);
    }
}

void walkTree(Node* node) {
    walkTree(node, 0);
}