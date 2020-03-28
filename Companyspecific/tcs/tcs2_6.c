#include<limits.h>
#include<stdio.h>
int main()
{
	int i=0,minimum = INT_MIN;
	int number[] = {23,48,98,1,6,8,200,10};
	while(i<sizeof(number)/sizeof(number[0]))
	{
		if(minimum>number[i]) minimum = number[i]; i++;
	}
}
