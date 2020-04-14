#include<iostream>
using namespace std;
int main()
{
  int i,j,k,l,n;
  cin>>n;
  for(k=i=1;i<=n;i++)
  {
    l=k+i-1;
    for(j=1;j<=i;j++)
    {
      
      if(i%2==1)
        if(j==1)
          cout<<k;
        else
        cout<<"*"<<k;
      else
        if(j==1)
          cout<<l;
        else
          cout<<"*"<<l;
      
      k++;
      l--;
    }
    cout<<"\n";
  }
  return 0;
}
