// Dion Niazi dn3gy 17 04 2017 heap.h
#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <iostream>
#include "heapNode.h"

using namespace std;

class heap{
 public:
  heap();
  void insert(heapNode* n);
  void deleteMin();
  heapNode* findMin();
  int getSize();
  bool isEmpty();
  vector<heapNode*> getVect();
 private:
  int size;
  vector<heapNode*> list;
};
#endif
