#include<iostream>
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
int main()
{
 cout<<factorial(5)<<endl; 
 cout<<fibonacci(9)<<endl;
 cout<<hcf(45,60)<<endl;
 lcm(72,120);
 cout<<power(2,5)<<endl; 
 return 0; 	
}