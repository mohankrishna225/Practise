#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 float chalk,k,days,small;
  cin>>chalk;
  k=(sqrt(chalk));
  small=1/k;
  days=floor(chalk+small*chalk)+1;
  cout<<days;
}
