#include<stdio.h>
#include<string.h>
int main()
{
	int i,num=0,upper=0,n,lower=0,dotcount=1;
	char userid[500];
	scanf("%s",userid);
	n = strlen(userid);
	for(i=0;i<n;i++)
	{
		if ((userid[i])>=48 && (userid[i])<=57)
		{
			num++;
		}
		if(isupper(userid[i]))
		{
			upper++;
		}
		if(islower(userid[i]))
		{
			lower++;
		}
		if((userid[0]=='.') || (userid[n-1]=='.'))
		{
			dotcount=0;
		}
			if((userid[i]=='.') && (userid[i+1]=='.'))
		{
			dotcount=0;
		}
	
	}	
	
    if((num>0) && (lower>0) && (upper>0)  && (dotcount>0))
    {
    	printf("%s is Valid",userid);
	}
	else
	{
		printf("%s is Invalid",userid);
	}
	return 0;
}
//Anu.123
//.anu
