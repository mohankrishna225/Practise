#include <iostream>
using namespace std;
int main()
{
    int i, j,n;
  	cin>>n;
  	int a=n+3;
    for(int i=n;i<=a;i++)
    {
 	for(int j=n;j<=i;j++)
    {
		cout<<i;
    }
    cout<<'\n';
  }
    for(i=a;i>=n;i--)
    {
        for(j=n;j<=i;j++)
        {
            cout<<i;
        }
        cout<<'\n';
    }
  return 0;
}
