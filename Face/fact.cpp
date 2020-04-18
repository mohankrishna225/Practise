#include <iostream>
long factorial(long a);
int main ()
{
  long number;
  std::cin>>number;
  std::cout<< factorial (number);
  return 0;
}
long factorial (long a)
{
  int fact;
  for(int i=1;i<=a;i++)
        fact=fact*i;
  
  return fact;
}
