#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "lib.h"

int main (int argc, char** argv)
{
    printf("Treehugger v0.2, hug harder\n");

    {
        time_t t;
        srand((unsigned) time(&t));
    }

    int depth = 5;
    Node* root;
    initNode(&root);

    Node* nextNode = root;
    while(depth-- > 0) { 
        initNode(&nextNode->left);
        initNode(&nextNode->right);
        nextNode = rand() % 2 ? nextNode->left : nextNode->right;
    }

    walkTree(root);

    return 0;
}