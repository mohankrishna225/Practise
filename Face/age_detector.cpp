#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  int birth,curr;
  cin>>birth>>curr;
  if(birth<curr)
  {
    cout<<curr-birth;
  }
  else
  {
    cout<<100+curr-birth;
  }
}
