#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a=6,b=5;
   for(int i=1;i<=n;i++)
   {
     cout<<a<<" ";
     a=a+b;
     b=b+5;
     
   }
  return 0;
}
