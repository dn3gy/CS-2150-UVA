// Dion Niazi dn3gy 23 01 2017 xToN.cpp
#include <iostream>
using namespace std;

int xton(int x,int n)
{
  if(n==0)
    return 1;
  else
    return x*xton(x,n-1);
}
int main()
{
  int x,y,z;
  cout << "Enter two integer values" <<endl;
  cin >> x;
  cin >> y;
  z = xton(x,y);
  cout << z << endl;
  return 0;
}
