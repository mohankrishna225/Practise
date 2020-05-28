//Valley_peak-approach
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
    int prices[n];
    int diff =0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&prices[i]);
	}
	for(i=1;i<n;i++)//i=1 since first stock is mandatory;//Initial Setting;
	{
		if(prices[i]>prices[i-1])
		{
			diff+=prices[i]-prices[i-1];
		}
	}
	printf("%d",diff);
	return 0;
}
