#include<stdio.h>
#include<math.h>
int main()
{
	int n; 
	scanf("%d",&n);
	int dec=0,i=0,rem;
	for(i=0;n>0;i++)
	{
		rem = n%10;
		n = n/10;
		dec = dec + rem * pow(2,i);   ///dec_value += rem(last_digit) * base;
		                        // base = base *2;
	}
	
	printf("%d",dec);
	return 0;
}
