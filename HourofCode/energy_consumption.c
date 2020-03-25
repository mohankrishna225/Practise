#include<stdio.h>
int main()
{
	int n,temp,b,mid,op;
	scanf("%d%d",&n,&b);
	mid = n/2;
	while(1)
	{
		temp = n - mid;
		if(temp%b==0)
		{
			op = mid * (temp/b);
			break;
		}
		mid = mid+1;
	}
	printf("%d",op);
	
	return 0;
}
