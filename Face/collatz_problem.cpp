#include<iostream>
using namespace std;
void printcollatz(int n)
{
  int count =0;
  while(n!=1)
  {
    cout<<n<<endl;
    if(n&1)
    {
		n=3*n+1;
        count+=1;
    }
    else
    {
      n=n/2;
      count+=1;
    }
  }
    cout<<n<<endl;
    cout<<count;
  }
  
int main()
{
  int n;
  cin>>n;
  printcollatz(n);
  return 0;
}
