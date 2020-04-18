#include<iostream>
using namespace std;
int main()
{
 int dollars,cents,dollar1,dollar2,cent1,cent2;
  cin>>dollar1>>cent1>>dollar2>>cent2;
  int t,m;
  dollars=dollar1+dollar2;
  cents=cent1+cent2;
  if(cents>100)
  {
    dollars=dollars+1;
    cents=cents-100;
  }
  cout<<dollars;
  cout<<"\n"<<cents;
}
