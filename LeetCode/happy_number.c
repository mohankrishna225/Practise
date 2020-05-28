/*19 = 1^2


*/


#include<stdio.h>
int square(int n)
{
	int num =0;
	while(n!= 0) 
	{
        num += (n%10) * (n%10);
        n /= 10;
    }
    
	return num;
}
	
int main()
{
	int n;
	scanf("%d",&n);
    int slow = n;
    int fast = n;
    do 
	{
        slow = square(slow);
        fast = square(square(fast));
    } 
    while (slow != fast);
    if(slow == 1)
    {
        	printf("Happy Number");
	}
	else
	{
		printf("Not a Happy Number");
	}
}
	

