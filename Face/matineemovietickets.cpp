#include<iostream>
using namespace std;
int main()
{
int age;
 int t;
 std::cin>>age;
 std::cin>>t;
  if(age>13)
  {
    switch (t)
    {
      case 10:
        std::cout<<"$8.00";
        break;
      case 13:
        std::cout<<"$5.00";
        break;
      case 18:
        std::cout<<"$8.00";
        break;
      case 22:
        std::cout<<"$8.00";
        break;
    }
  }
  else
  {
    switch (t)
    {
      case 10:
        std::cout<<"$4.00";
        break;
      case 13:
        std::cout<<"$2.00";
        break;
      case 18:
        std::cout<<"$4.00";
        break;
      case 22:
        std::cout<<"$4.00";
        break;
    }
  }
}
