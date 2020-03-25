#include<stdio.h>
int main()
{
	char a[10];
	int i,len=0,count=0,cou=0;
	scanf("%[^\n]s",a);
	if(a[0]=='K'&& a[1]=='A')
	{
		printf("Karnataka\n");
	}
	if(a[0]=='K' && a[1]=='L')
	{
		printf("Kerala\n");
	}
	if(a[0]=='T' && a[1]=='N')
	{
		printf("Tamilnadu\n");
		
	}
	for(len=0;a[len];len++);
	for(i=len-1;i>=len-4;i--)
	{
		if(a[i]==a[i-1])
		{
			count++;
		}
		if((a[i]-1)==(a[i-1]))
		{
			cou++;
		}
	}
	
	if(count==3||count==1||cou==3||len==6||len==5)
	{
		printf("Fancy");
	}
	else
	{
		printf("Not Fancy");
	}
	
	return 0;
}
