#include<iostream>
using namespace std;
int fib(int n);
int main()
{
  int n;
  cin>>n;
  cout<<"The term "<<n<<" in the fibonacci series is "<<fib(n-1);
  return 0;
}
int fib(int n)
{
  if((n==1)||(n==0))
    return (n);
  else
    return (fib(n-1)+fib(n-2));
}
