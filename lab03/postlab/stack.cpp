#include <iostream>
#include "stack.h"
//#include "stackNode.h"
#include <cstdlib>
#include "postfixCalculator.h"
#include "List.h"
#include "ListItr.h"
#include "ListNode.h"
#include <string>
using namespace std;

Stack::Stack()
{
  // head = new StackNode();
  // head->next = NULL;
  //topp = NULL;
  stack = new List();
  count = 0;
}

Stack::~Stack()
{
  /*if(empty()){
    delete head;
  }
  else{
    StackNode *n = new StackNode();
    while(!empty()){
      n = head->next;
      head->next = n->next;;
      delete n;
    }
    delete head;
    }*/
  delete stack;
}

void Stack::push(int e)
{
  /*StackNode *n = new StackNode(e);
  if(topp == NULL){
    head->next = n;
    topp = n;
  }
  else{
    StackNode *s = topp;
    s->next = n;
    topp = s->next;
  }
   
 // /*if(empty()){
    head->next =  n;
    top = n;
  }
  else{
    StackNode *s = new StackNode();
    s = head->next;
    while(s->next != NULL){
      s = s->next;
    }
    s->next = n;
    n->next = NULL;
    delete s;
  }*/
  if(empty())
    itr = stack->first();
  stack->insertBefore(e,itr);
  count++;
}
int Stack::top()
{
  //return topp->value;
  itr.moveBackward();
  int num = itr.retrieve();
  itr.moveForward();
  return num;
}

void Stack::pop()
{
  int num = top();
  stack->remove(num);
  //StackNode *del = new StackNode();
  //del = topp;
}

bool Stack::empty()
{
  if(count == 0)
    return true;
  return false;
}
//void print()
//{
  //printList(*stack,true);
//}
