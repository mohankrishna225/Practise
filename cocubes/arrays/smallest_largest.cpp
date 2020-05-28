#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {1,2,5,10,5,6,3,0},i,n = 8,small,big;
	big = a[0];
	small = a[0];
	for(i=0;i<n;i++)	
	{
		if(a[i]>big)
		{
			big = a[i];
		}
		if(a[i]<small)
		{
			small = a[i];
		}
	}
	printf("The smallest number is %d\nThe largest number is %d\n",small,big);
	getch();
}
