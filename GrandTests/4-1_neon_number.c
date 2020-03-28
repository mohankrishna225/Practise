#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,digit;
	long int result,sum=0;
	scanf("%d",&n);
	result = n*n;
	while(result)
	{
		digit = result%10;
		sum = sum +digit;
		result = result/10;
	}
	if(sum==n)
	{
		printf("%d is neon number",n);
	}
	else
	{
		printf("%d is not neon number",n);
	}
	return 0;
}
