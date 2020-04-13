#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int radius,side;
  float square,circle;
  cin>>radius>>side;
  if(2*radius<=side)
  {
    cout<<"circle can be inside a square";
  }
  else
  {
     cout<<"circle cannot be inside a square";
  }
}
