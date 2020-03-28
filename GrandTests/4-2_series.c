#include<stdio.h>
int main()
{
	int i;
	double n,result=0,fact=1;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		fact = fact *i;
		result = result + (i/fact);
	}
	printf("%lf",result);
	return 0;
}
