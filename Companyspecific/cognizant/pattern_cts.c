#include<stdio.h>
int main()
{
	int i,j,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i*j>=10)
			{
				printf("%d ",i*j);
			}
			else
			{
				printf("%d  ",i*j);
			}
		}
		printf("\n");
	}
	return 0;
}

/*5
1
2  4
3  6  9
4  8  12 16
5  10 15 20 25*/
