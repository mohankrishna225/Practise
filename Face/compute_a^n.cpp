#include<iostream>
#include<cmath>
using namespace std;
int pow(int n,int m);
int main()
{
	int base,a,res;
  	cout<<"Enter the value of a "<<'\n';
  	cin>>base;
  	cout<<"Enter the value of n "<<'\n';
  	cin>>a;
  	res= pow(base,a);
  	cout<<"The value of "<<base<<" power "<<a<<" is "<<res;
  	return 0;
}
int pow(int base,int a)
{
  if(a!=0)
    return (base * pow(base,a-1));
  else
    return 1;
}
