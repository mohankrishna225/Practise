#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int no_of_ele,i,data,found=0;
	scanf("%d",&no_of_ele);
	arr = (int*)malloc(no_of_ele*sizeof(int));
	for(i=0;i<no_of_ele;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the Element to search: ");
	scanf("%d",&data);
		for(i=0;i<no_of_ele;i++)
	{
		if(arr[i]==data)
		{
			printf("Found at %d",i);
			found=1;
			break;
		}
		
	}
	
	if(found==0)
	{
		printf("Not Found");
	}
	
	
	return 0;
}
