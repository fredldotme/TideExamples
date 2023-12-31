#include <lib.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include <iostream>

Node *initialize(Node *node) {
  return rand() % 2 ? initNode(&node->left) : initNode(&node->right);
}

int main(int argc, char *argv[]) {
  std::cout << "Luke Treewalker v0.3!" << std::endl;

  std::cerr << "warning: Seeding randomness" << std::endl;
  time_t currentTime;
  srand((unsigned)time(&currentTime));

  int depth = 5;
  Node *root;
  initNode(&root);
  Node *nextNode = root;
  std::cout << "Node depth: " << depth << std::endl;

  while (depth-- > 1) {
    nextNode = initialize(nextNode);
  }

  walkTree(root);

  return 0;
}