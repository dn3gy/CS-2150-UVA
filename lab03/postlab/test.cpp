// Dion Niazi dn3gy 07 02 2017 testPostFixCalc.cpp
#include <iostream>
#include "post.h"
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;
int main() {
  PostFixCalculato p;
  while(cin.good()){
    string str;
    cin >> str;
    string num="";
      if(isdigit(str[0])){
        p.pushNum(stoi(str));
      }
      else if(isdigit(str[0])== false){
	int i;
	if(str[0]=='+')
	  p.add();
	else if(str[0]=='-')
	  if((stringstream(str)>>i))
	    p.pushNum(i);
	  else
	    p.sub();
	else if(str[0]=='*')
	  p.mult();
	else if(str[0]=='/')
	  p.div();
	else if(str[0]=='~')
	  p.neg();
        }
    }
  if(p.total.empty())
	exit(-1);
  cout << "Result is: " << p.getTopValue() << endl;
  return 0;
}
 
