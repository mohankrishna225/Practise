#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {1,2,5,10,5,6,3,2},i,n = 8,big,sec_big;
	big = a[0];
	sec_big = a[1];
	for(i=0;i<n;i++)	
	{
		if(a[i]>big)
		{
			sec_big = big; 
			big = a[i];
		}
		else if((a[i]>sec_big) && (a[i]<big))
		{
			sec_big = a[i];
		}
	}
	printf("The largest number is %d\nThe second largest number is %d\n",big,sec_big);
	getch();
}
