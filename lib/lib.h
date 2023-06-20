#ifndef THE_LIB
#define THE_LIB

struct Node {
    Node* left;
    Node* right;
    int val;
};

Node* initNode(Node** node);
void walkTree(Node* node, int depth);
void walkTree(Node* node);

#endif