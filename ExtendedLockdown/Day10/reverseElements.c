#include<stdio.h>
int reverseElements(int a[],int n)
{
int digit,reverse=0,i,b[n];
for(i=0;i<n;i++)
{
  while(a[i]!=0)
   {
   digit=a[i]%10; 
   reverse = reverse*10+digit;
   a[i]/=10;
   }
  b[i]=reverse;
   reverse =0;
}
for(i=0;i<n;i++)
{
printf("%d",b[i]);
}
}
int main()
{
int n;
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
reverseElements(a,n);
}