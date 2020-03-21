//Allocate memory for one dimensional array and print elements along with sum of all even elements.
//Memory to be allocated using malloc and released using free() Dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arr;
	int limit,i;
	int sum=0;
	
	scanf("%d",&limit);
	arr = (int*)malloc(limit*sizeof(int));
	if(arr==NULL)
	{
		printf("Insufficient Memory");
	}
	
	for(i=0;i<limit;i++)
	{
		scanf("%d",&arr[i]);  //(arr+i)
		if(arr[i]%2==0)       //*(arr+i)
		{
			sum=sum + arr[i];       //*(arr+i);
			
		}
	}
	for(i=0;i<limit;i++)
	{
		printf("%d ",arr[i]);             //*(arr+i));
	}
	printf("\nSum: %d",sum);
	
	
	return 0;
}
