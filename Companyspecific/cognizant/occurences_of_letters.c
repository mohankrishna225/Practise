#include<stdio.h>
int main()
{
	int n,i,a,arr[50],ct=0;
	scanf("%d %d",&n,&a);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a==a[i])
		{
			ct++;
		}

	}
	printf("%d",ct);
	return 0;
}
