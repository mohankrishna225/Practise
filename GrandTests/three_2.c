#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	float amount,ci;
	scanf("%f",&amount);
	for(i=1;i<=10;i++)
	{
		ci = amount*pow((1.05),i);
		printf("%.2f\n",ci);
		
	}
	return 0;
}

//1000   
//5 percent interest rate..
//1050.00
//1102.50
//1157.62
//1215.51
//1276.28
//1340.10

        
