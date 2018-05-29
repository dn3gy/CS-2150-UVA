// Dion Niazi dn3gy 06 02 2017 postfixCalculator.cpp
#include <iostream>
//#include <stack>
#include <cstdlib>
#include "post.h"
#include "stack.h"
using namespace std;
PostFixCalculato::PostFixCalculato()
{

}
  void PostFixCalculato::add()
  {
    int top = total.top();
    total.pop();
    int bot = total.top();
    total.pop();
    total.push( top+bot);
  }
  void PostFixCalculato::sub()
  {
    int top = total.top();
    total.pop();
    int bot = total.top();
    total.pop();
    total.push(bot-top);
  }
  void PostFixCalculato::div()
  {
    int top = total.top();
    total.pop();
    int bot = total.top();
    total.pop();
    total.push(bot/top);
  }
  void PostFixCalculato::mult()
  {
    int top = total.top();
    total.pop();
    int bot = total.top();
    total.pop();
    total.push(top*bot);
  }
  void PostFixCalculato::neg()
  {
    int top = total.top();
    total.pop();
    total.push(top*-1);
  }
  void PostFixCalculato::pushNum(int num)
  {
    total.push(num);
  }
  int PostFixCalculato::getTopValue()
  {
    return total.top();
  }
