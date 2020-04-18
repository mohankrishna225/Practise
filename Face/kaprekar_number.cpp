#include<iostream>
#include<cmath>
using namespace std;
int kaprekar(int n)
{
    int flag=0;
    if (n == 1)
       flag=1;
    int sqr_n = n * n;
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;
        sqr_n /= 10;
    }
    sqr_n = n*n; 
    for (int r_digits=1; r_digits<ctr_digits; r_digits++)
    {
         int eq_parts = pow(10, r_digits);
         if (eq_parts == n)
            continue;
         int sum = sqr_n/eq_parts + sqr_n % eq_parts;
         if (sum == n)
           return flag=1;
    }
    return flag;
}
int main()
{
  int kpno;
  cin >> kpno;
  (kaprekar(kpno)==1)? cout <<"Kaprekar Number":cout<<"Not a Kaprekar Number";
          cout <<endl; 
  return 0;
}
