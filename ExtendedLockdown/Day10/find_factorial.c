#include<stdio.h>
int find_factorial(int n)
{
   if(n==0)
     return 1;
return n*find_factorial(n-1);
}
int main()
{
 int n;
 scanf("%d",&n);
 printf("%d",find_factorial(n));

return 0;
}