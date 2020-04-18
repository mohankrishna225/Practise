#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a;
    a=pow((11 + 4 * i),2);
    cout<<a<<" ";
  }
  return 0;
}
