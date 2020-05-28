//Good friend Algoritm Taking two pointers .
// 
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	if(n==0||n==1)
	{
		return;
	}
	int left=0,right=0,temp;
	while(right<n)
	{
		if(arr[right]==0)
		{
			++right;
		}
		else
		{
			temp = arr[left];
			arr[left]=arr[right];
			arr[right] = temp;
			++left;
			++right;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
    }  
	
	return 0;
}
