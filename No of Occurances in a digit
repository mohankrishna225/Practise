Count the number of occurrences of a digit in a given number.
Sample Input 
12224 2
Sample Output 
3
-------------------------------------------------------------

#include <stdio.h>
int main()
{
    int num,tNum,digit,len;
    int rem;
 
    scanf("%d",&num);
    scanf("%d",&digit);
 
    len=0;
 
    while(num>0)
    {
        rem = num%10;
        if(rem==digit)
            len++;
        num/=10;
    }
 
    printf("%d",len);
     
    return 0;
}
