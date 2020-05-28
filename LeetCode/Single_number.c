//Unique Element

#include<stdio.h>
int main()
{
	int num,i,result =0;
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num;i++)
	{
		result =result ^ arr[i];
	}
	printf("%d",result);
}
