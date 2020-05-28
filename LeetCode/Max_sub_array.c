//https://medium.com/@rsinghal757/kadanes-algorithm-dynamic-programming-how-and-why-does-it-work-3fd8849ed73d
#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
	int max;
	max = a>b?a:b;
	return max;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int local_max=0;
	int global_max=INT_MIN;
	for(i=0;i<n;i++)
	{
		local_max = max(a[i],a[i]+local_max);
		if(local_max>global_max)
		{
			global_max = local_max;
		}
	}
	printf("%d",global_max);
	return 0;
}
