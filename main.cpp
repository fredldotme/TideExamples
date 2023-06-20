#include <lib.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  std::cout << "Luke Treewalker v0.3!" << std::endl;

  usleep(10000000);

  time_t t;
  srand((unsigned)time(&t));
  int depth = 5;

  Node *root;
  initNode(&root);
  Node *nextNode = root;

  while (depth-- > 0) {
    nextNode =
        rand() % 2 ? initNode(&nextNode->left) : initNode(&nextNode->right);
    walkTree(root);
  }

  return 0;
}