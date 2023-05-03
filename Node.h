#ifndef Node_H
#define Node_H

struct Node {
  int data;
  Node *left;
  Node *right;

  Node(int value) {
    data = value;
    left=NULL;
    right= NULL;
  }
};

#endif