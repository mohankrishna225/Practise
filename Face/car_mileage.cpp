#include<iostream>
using namespace std;
int main()
{
  //Type your code here.
  float mileage,petrol,distance;
  cin>>mileage>>petrol>>distance;
  if(mileage*petrol<distance)
  {
    cout<<"Cannot reach";
  }
  else
  {
    cout<<"Can reach";
  }
}
