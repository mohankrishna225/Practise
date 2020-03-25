#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int i,n,sum =0 ;
	scanf("%d",&n);
	if(n<=15)
	{
		a= (int*)malloc(n*sizeof(int));
		for(i=0;i<n;i++)
		{
			scanf("%d",(a+i));
			
		}
		for(i=0;i<n;i++)
		{
			sum = sum + *(a+i);
		}
		printf("The sum of the elements in the array is %d",sum);
	}
	return 0;
}
