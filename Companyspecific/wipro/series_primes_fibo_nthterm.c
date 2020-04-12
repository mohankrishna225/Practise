#include<stdio.h>
int main()
{
	int n,flag;
	int i,t=1;
	int j,a,b,c,r,g;
	a=0,b=1,c=0,r=1;
	scanf("%d",&n);
	if(n%2!=0)
	{
		while(r<=(n/2+1))
		{
			g=b;
			c=a;
			a=b;
			b=a+c;
			r++;
		}
		printf("%d",g);
	}
	else
	{
		for(i=2;t<=(n/2);i++)
		{
			flag=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			
			}
			
				if(flag==0)
				{
					t++;
				}
			
		}
		printf("%d",i-1);
	}
return 0;
}
