#include<stdio.h>
int max(int a,int b)
{
	int maximum;
	maximum = (a>b?a:b);
	return maximum;
}
int rod(int arr[],int n)
{
	int val[n+1];
	val[0]=0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		int max_value=0;
		for(j=0;j<i;j++)
		{
			max_value= max(max_value,arr[i]+val[i-j-1]);
		}
		val[i] = max_value;
	}
	return val[n];
}

int main()
{
	int i,n,value;
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	value = rod(arr,n);
	printf("%d",value);	
		
	return 0;
}
