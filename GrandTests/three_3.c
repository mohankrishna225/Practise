#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int num;
	int seven,six,five,four,three,two,one,sum,checksum;
	scanf("%ld",&num);
	seven = num/1000000;
	six = (num/100000)%10;
	five = (num/10000)%10;
	four = (num/1000)%10;
	three = (num/100)%10;
	two = (num/10)%10;
	one = (num%10);
//	printf("%ld %ld %ld %ld %ld %ld %ld ",seven,six,five,four,three,two,one);
	sum = ((seven+five+three+one)*3) + (six+four+two);
	if(sum%10==0)
	{
		checksum=0;	
	}
	else
	{
		checksum=(10-(sum%10));
	}
	
	printf("%d",checksum);
	
	return 0;
}
