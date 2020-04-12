#include<stdio.h>
int main()
{
	int i,p,j,k=0,n,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ans[n];
	j=n-1;
	k=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			ans[i]=a[j];
			j--;
		}
		else
		{
			ans[i]=a[k];
			k++;
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",ans[i]);
	}
	return 0;
}
