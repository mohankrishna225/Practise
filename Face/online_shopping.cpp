#include<iostream>
using namespace std;
int main()
{
 float a,b,c,d,e,f,g,h,i;
  std::cin>>a>>b>>c;
  std::cin>>d>>e>>f>>g>>h>>i;
 float x,y,z;
  x=(a-((b/100)*a))+c;
  y=(d-((e/100)*d))+f;
  z=(g-((h/100)*g))+i;
  if(x<y && x<z)
  {
    cout<<"In Flipkart Rs."<<x;
    cout<<"\nIn Snapdeal Rs."<<y;
    cout<<"\nIn Amazon Rs."<<z;
    cout<<"\nHe will prefer Flipkart";
  }
  else if(y<z && y<x)
  {
    cout<<"In Flipkart Rs."<<x;
    cout<<"\nIn Snapdeal Rs."<<y;
    cout<<"\nIn Amazon Rs."<<z;
    cout<<"\nHe will prefer Snapdeal";
  }
  else if(z<x && z<y)
  {
    cout<<"In Flipkart Rs."<<x;
    cout<<"\nIn Snapdeal Rs."<<y;
    cout<<"\nIn Amazon Rs."<<z;
    cout<<"\nHe will prefer Amazon";
  }
  else if(x==y || x==z)
  {
    cout<<"In Flipkart Rs."<<x;
    cout<<"\nIn Snapdeal Rs."<<y;
    cout<<"\nIn Amazon Rs."<<z;
    cout<<"\nHe will prefer Flipkart";
  }
}
