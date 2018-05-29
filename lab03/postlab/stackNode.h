#ifndef STACKNODE_H
#define STACKNODE_H
#include <iostream>
#include "stack.h"
using namespace std;
class Stack;
class StackNode{
 public:
  StackNode(); //Constructor
  StackNode(int val); //one parameter Constructor
 private:
  int value;
  StackNode *next;
  friend class Stack;
};
#endif
