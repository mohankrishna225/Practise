#include<stdio.h>
#include<math.h>
int main()
{
	int a[30][30],m,n,i,j,sum=0,nor=0;
	scanf("%d %d",&m,&n);
	if(m==n)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				nor = nor + pow(a[i][j],2);
				if(i==j)
				{
					sum = sum + a[i][j];
				}
			}
		}	
		
		printf("sum: %d",sum);
		printf("normal %d",nor);
		
		
	}
	return 0;
}
