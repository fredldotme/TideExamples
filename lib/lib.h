#ifndef THE_LIB
#define THE_LIB

struct Node {
    Node* left;
    Node* right;
    int val;
};

void initNode(Node** node);
void walkTree(Node* node);

#endif