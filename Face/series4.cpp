#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 	int n,sum;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     if(i%2==0)
     {
       int a;
       a=pow(i,2);
       sum=a-2;
       cout<<sum<<" ";
     }
     else
     {
       int b;
       b=pow(i,2);
       sum=(b-1);
       cout<<sum<<" ";
     }
   }
  return 0;
}
