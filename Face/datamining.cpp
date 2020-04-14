#include<iostream>
using namespace std;
int main()
{
   int n,m,sum=0,sum1=0;
   cin>>n;
   while(n>0)
   {
     m=n%10;
     if(m%2==0){
       sum=sum+m;}
     else{ 
       sum1=sum1+m;}
     n=n/10;
   }
  if(sum==sum1){
    cout<<"Yes";}
  else{
    cout<<"No";}
 return 0;
}
