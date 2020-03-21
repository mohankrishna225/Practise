#include<stdio.h>
int main()
{
	double rainfall;
	scanf("%lf",&rainfall);
	
	if(rainfall<1)
	{
		printf("No Rain");
	}
	else if(rainfall<5)
	{
		printf("Light Rain");
	}
	else if(rainfall<10)
	{
		printf("Moderate Rain");
	}
	else
	{
		printf("Heavy Rain");
	}
	return 0;
}

//3.4 Light Rain
