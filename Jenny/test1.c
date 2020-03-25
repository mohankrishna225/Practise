#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=i+i-1;j++)
		{
			printf("%d",j%10);
		}
		for(j=j-2;j>=i;j--)
		{
			printf("%d",j%10);
		}
		printf("\n");
	}
}
