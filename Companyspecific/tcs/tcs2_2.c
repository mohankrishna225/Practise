#include<limits.h>
#include<stdio.h>
int main()
{
	int a=17,b=5,flag=1,result;
	int x = abs(a);
	int y = abs(b);
	for(result = 0;x>y;result++)
	
	{
			    x=y;
	if((a>=0 && b<0) || (a<0&&b>=0))
	{
		 flag = 1;
	result = result * flag;
	
	}

	}

		  printf("%d",result);
}
