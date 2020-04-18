#include<iostream>
using namespace std;
int main()
{
  // Type your code here
  long long int n;
  int count=0;
  cin>>n;
  if(n==0)
  {
    count=1;
  }
  else
  {
  while(n!=0)
  {
     n=n/10;
    ++count;
   
  }
  }
  cout<<count;
  return 0;
}
