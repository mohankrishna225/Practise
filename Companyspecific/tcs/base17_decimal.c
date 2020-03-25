#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char hex[32]={0};
    int  dec,i;
    int  cnt;   /*for power index*/
    int  digit;   /*to store digitit*/
 
    scanf("%[^\n]s",hex);
 
    cnt=0;
    dec=0;
    for(i=(strlen(hex)-1);i>=0;i--)
    {
        if(hex[i]=='A')
        {
        	digit=10;
        	
		}
		else if(hex[i]=='B')
		{
			digit=11;
			
		}
		else if(hex[i]=='C')
		{
			digit=12;
			
		}
			else if(hex[i]=='D')
		{
			digit=13;
			
		}
			else if(hex[i]=='E')
		{
			digit=14;
		
		}
			else if(hex[i]=='F')
		{
			digit=15;
		
		}
			else if(hex[i]=='G')
		{
			digit=16;
			
		}
		else
		{
			digit=hex[i]-48;
	    }
        dec= dec+ (digit)*pow((double)17,(double)cnt);
        cnt++;
    }
 
    printf("%d",dec);
    return 0;
}
