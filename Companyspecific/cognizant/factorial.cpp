#include<iostream>
#include<cmath>
using namespace std;
int power(int base,int a)
{
	if(a!=0)
	{
		return (base*power(base,a-1));
	}
	else
	{
		return 1;
	}
}

int fibonacci(int n)
{
	 if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
    
    
}

void factorial_series(int n)
{
	  for (int i = 0 ; i <= n ; i++ )
   {
      cout<<fibonacci(i)<<" ";
   }
}


int hcf(int n1,int n2)
{
	if(n2!=0)
	{
		return hcf(n2,n2%n1);

	}
	else
		return n1;

}

int factorial(int n)
{
	if(n>=1)
	{
	return n*(factorial(n-1));
	}
	else
	{
	return 1;
	}
}

int sum_of_digits(int num)
{
	int sum=0,rem;
	while(num!=0)
	{
		rem = num%10;
		sum+=rem;
		num=num/10;
	}
	return sum;
}

int lcm(int n1,int n2)
{ int max;
	max = (n1>n2)?n1:n2;
	while(1)
	{
		if ((max%n1==0) && (max%n2==0))
			{
				cout<<max<<endl;
				break;
			}
			max++;
	}

}

void leap_year(int year)
{
	if((year%4==0) && (year%100!=0) || (year%400))
	{
		cout<<"leap_year"<<endl;
	}
	else
	{
		cout<<"Not a leap_year"<<endl;

	}
}

void Armstrong(int number)
{

int num, originalNum, remainder, n = 0;
   float result = 0.0;

   num = number;

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    cout<<num<<" is an Armstrong number."<<endl;
   else
    cout<<num<<" is not an Armstrong number"<<endl;

}


int main()
{
 Armstrong(153);	
 cout<<factorial(5)<<endl; 
 factorial_series(10);
 cout<<fibonacci(9)<<endl;
 cout<<hcf(45,60)<<endl;
 lcm(72,120);
 cout<<power(2,5)<<endl; 
 cout<<sum_of_digits(123)<<endl;
 leap_year(2004);
 return 0; 	
}