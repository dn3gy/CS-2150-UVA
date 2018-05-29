#include <iostream>
#include "stackNode.h"
#include "stack.h"
using namespace std;

StackNode::StackNode()
{
  value = 0;
  next = NULL;
}
StackNode::StackNode(int val)
{
  value = val;
  next = NULL;
}
