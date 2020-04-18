#include<iostream>
using namespace std;
int gcd(int m,int n);
int main()
{
	int n,m;
  	cin>>n>>m;
  	cout<<"G.C.D of "<<n<<" and "<<m<<" = "<<gcd(n,m);
  	return 0;
}
int gcd(int n,int m)
{
	if(m!=0)
      return gcd(m,n%m);
  	else
      return n;
}
