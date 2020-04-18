#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  float a=0.5,sum=0.0;
  for(int i=1;i<=n;i++)
  {
 	if(i==1){
		sum=sum+a;
        cout<<sum<<" ";
    }
    else
    {
       a=(float) a*3.0;
       cout<<a<<" ";
    }
  }
  return 0;
}
