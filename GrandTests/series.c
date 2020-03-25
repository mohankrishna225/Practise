#include<stdio.h>
int main()
{
	int ct,x;
	scanf("%d %d",&x,&ct);
	printf("%d",x);
	ct = ct -1;
	while(ct!=0)
	{
	if(x%2==0)
	{
		x=x/2;
		printf("%d",x);
		ct=ct-1;
		}	
	}
	else
	{
		x=(3*x)+1;
		printf("%d",x);
		ct=ct-1;
	}
	return 0;
}
