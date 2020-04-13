#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  string s;
  int n,l=0,r=0;
  cin>>s>>n;
  if(s[0]=='f')
    if(n==1)
        cout<<"Left Handed";
    else
        cout<<"Right Handed";
  else if(s[0]=='r')
    if(n==1)
        cout<<"Right Handed";
    else 
        cout<<"Left Handed";
}
