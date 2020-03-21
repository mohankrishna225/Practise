#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int limit;
	int len = strlen(str);
	int i=0,k,j,remaining;
	if(len%2==0)
	{
		printf("Even length");
	}
	else
	{
		while(i<len)
		{
			//print Spaces
			for(j=0;j<len-i;j++)
			{
				printf(" ");
			}
			limit=0;
			//print last part of word
			for(k=len/2;k<len && limit<=i;k++,limit++)
			{
				printf("%c",str[k]);
			}
			
			//print first part of word
			for(k=0;k<len/2 && limit<=i;k++,limit++)
			{
				printf("%c",str[k]);
			}
			printf("\n");
			i++;
		}
	}
	return 0;
}
/*
 placement
         e
        em
       eme
      emen
     ement
    ementp
   ementpl
  ementpla
 ementplac
*/


