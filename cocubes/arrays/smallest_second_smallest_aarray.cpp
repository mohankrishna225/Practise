#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10] = {1,2,5,10,5,6,3,0},i,n = 8,small,sec_small;
	small = a[0];
	sec_small = a[1];
	for(i=0;i<n;i++)	
	{
		if(a[i]<small)
		{
			sec_small = small; 
			small = a[i];
		}
		else if((a[i]>sec_small) && (a[i]<small))
		{
			sec_small = a[i];
		}
	}
	printf("The smallest number is %d\nThe second smallest number is %d\n",small,sec_small);
	getch();
}
