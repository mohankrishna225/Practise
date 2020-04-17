#include<iostream>
int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}
int arm(int n)
{
   int f,temp,sum=0,num, rem,digits;
   int flag=0;

   temp = n;
  num =temp;
   while(temp != 0)
 {
 temp=temp/10;
 digits+=1;
 }
  f= num;
   while(f > 0) {
      rem = f % 10;
      sum = sum +power(rem,digits);
      f = f/10;
   }
   if (sum==n)
      flag = 1;
   else
      flag = 0;

   return flag;  
 }
int main()
{
    int n;
    std::cin>>n;
    if(arm(n)==1)
        std::cout<<"Kindly proceed with encrypting";
    else
        std::cout<<"It is not an Armstrong number";
    
}
