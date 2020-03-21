#include<stdio.h>
int main()
{
	int p,i,n;
	scanf("%d",&n);
	i = n%8;
	if(i==1)
	{
		p=n+3;
		printf("%dLB",p);
	}
	else if(i==2)
	{
		p=n+3;
		printf("%dMB",p);
	}
		else if(i==3)
	{
		p=n+3;
		printf("%dUB",p);
	}
		else if(i==4)
	{
		p=n-3;
		printf("%dLB",p);
	}
		else if(i==5)
	{
		p=n-3;
		printf("%dMB",p);
	}
		else if(i==6)
	{
		p=n-3;
		printf("%dUB",p);
	}
		else if(i==7)
	{
		p=n+1;
		printf("%dSU",p);
	}
		else if(i==0)
	{
		p=n-1;
		printf("%dSL",p);
	}
	
	return 0;
}
