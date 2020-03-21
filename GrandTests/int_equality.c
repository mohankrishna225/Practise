#include<stdio.h>
int main()
{
	int chocolates,children,f;
	scanf("%d %d",&children,&chocolates);

	if(chocolates%children==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

// 4 17
