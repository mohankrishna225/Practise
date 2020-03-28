#include<stdio.h>
int algo(int num)
{
	int i=2;
	while(i<=num/2)
	{
		if(num%i==0)
		{
			printf("Unsuccesful");
			break;
		}
		i=i+1;
		
	}
	
	if(i==(num/2)+1)
		{
			printf("successful");
		}
}
int main()
{
	int num;
	scanf("%d",num);
	algo(num);
	return 0;
}
