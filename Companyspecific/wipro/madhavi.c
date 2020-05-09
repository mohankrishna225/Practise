#include<stdio.h>
#include<math.h>
int main()
{
	int i,temp,b,news=0,count=0,a;
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
		count++;
			
	}
	
	for(i=count-1;i>=0;i++)
	{
		b=a/(pow(10,i));
		b=10-b;
		news+= b*pow(10,i);
	}
	printf("%d",news);
	return 0;
}
