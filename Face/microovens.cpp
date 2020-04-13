#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int n;
  float h;
  cin>>n>>h;
  if(n==2)
    cout<<float(h+h*0.5);
  else if(n==3)
    cout<<float(2*h);
  else
    cout<<"Number of items is more";
}
