#include<stdio.h>
int perfectNumber(int n);
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
 	   if(n%i==0)
		{
		 sum+=i;
		}
	}
	if(sum==n)
	{
	 printf("\n %d is a perfect number",n);
	}
	else
	{
	printf("\n %d is not a perfect number",n);
	}
	return 0;
}
int main()
{
	int num;
	scanf("%d",&num);
	perfectNumber(num);
 	
return 0;
}

