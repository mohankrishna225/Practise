#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=i;j<=i+i-1;j++)
		{
			printf("%d",j%10);
		}
		for(j=j-2;j>=i;j--)
		{
			printf("%d",j%10);
		}
		printf("\n");
	}
}
/*         1
        232
       34543
      4567654
     567898765
    67890109876
   7890123210987
  890123454321098
 90123456765432109
0123456789876543210
*/
