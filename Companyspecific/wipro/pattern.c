#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				if(j!=i)
				{
					printf("%d*",i);
				}
				else
				{
					printf("%d",i);
				}
			}
			printf("\n");
		}
		
		for(i=n;i>=1;i--)
		{
			for(j=i;j>=1;j--)
			{
				if(j!=1)
				printf("%d*",i);
				else
				printf("%d",i);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Wrong Input");
	}
	return 0;
}
