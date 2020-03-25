#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	int arr[n],arr2[n],arr3[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&arr[i]);
		
	}
		for(j=0;j<n;j++)
	{
		scanf("%d ",&arr2[i]);
		
	}
	
			for(i=0;i<n;i++)
	{
		arr3[i] = arr2[i] * arr[i];
		printf("%d ",arr3[i]);
		
	}
	
	
	
	return 0;
}
