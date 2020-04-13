#include<iostream>
#include<math.h>
using namespace std;
int large(int a, int b , int c)
{
  if(a >= b && a >= c)
    {
        if(b >= c)
           cout<<"The treasure is in box which has number "<<b;
        else
             cout<<"The treasure is in box which has number "<<c;
    }
    else if(b >= a && b >= c)
    {
        if(a >= c)
             cout<<"The treasure is in box which has number "<<a;
        else
             cout<<"The treasure is in box which has number "<<c;
    }
    else if(a >= b)
        cout<<"The treasure is in box which has number "<<a;
    else
        cout<<"The treasure is in box which has number "<<b;
}
int gcd(int a, int b) 
{ 
	if (a == 0) 
	return b; 
	if (b == 0) 
	return a; 
	if (a == b) 
		return a;  
	if (a > b) 
		return gcd(a-b, b); 
	return gcd(a, b-a); 
} 
int main() 
{ 
  int a,b,c;
  cin>>a>>b>>c;
  large(a,b,c);
	cout<<"\nThe code to open the box is "<<gcd(gcd(a, b),c); 
	return 0; 
}
