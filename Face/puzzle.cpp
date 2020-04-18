#include<iostream>
using namespace std;
int main()
{
  int r,c,i,j;
  cin>>r>>c;
  int x[r][c];
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>x[i][j];
    }
  }
   for(j=0;j<c;j++)
  {
    for(i=0;i<r;i++)
    {
      cout<<x[i][j]<<" ";
    }
     cout<<"\n";
  }
}
