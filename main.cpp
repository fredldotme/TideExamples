#include <lib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#include <iostream>
#include <memory>

int main(int argc, char *argv[]) {
  printf("Treehugger v0.2, hug harder\n");
  std::cout << "Now with more trees!" << std::endl;

  usleep(10000000);

  time_t t;
  srand((unsigned)time(&t));
  int depth = 5;

  Node* root;
  initNode(&root);
  Node *nextNode = root;

  while (depth-- > 0)
    nextNode =
        rand() % 2 ?
initNode(&nextNode->left) : initNode(&nextNode->right);
  walkTree(root);

  printf("Hugging complete with depth %d!\n", depth);

  return 0;
}