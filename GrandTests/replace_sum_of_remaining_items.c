#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n,i;
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory not Allocated.\n");
		exit(0);
	}
	else
	{
		printf("Memory Allocated Succesfully\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ptr[i]);
		}
		
		int sum =0;
		for(i=0;i<n;i++)
		{
			sum +=ptr[i];  // ==>  1+2+3+4+5=(15)
		}
		for(i=0;i<n;i++)
		{
			ptr[i]=sum -ptr[i];  //==>  15 -1 ,15-2 ,15-3 ,15-2 ,15-1;  
		}
		for(i=0;i<n;i++)
		{
			printf("%d ",ptr[i]);
		}
		
	}
	return 0;
}
//5
//1 2 3 4 5 ==> 14 13 12 11 10   
