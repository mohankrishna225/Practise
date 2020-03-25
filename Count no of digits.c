Count the number of digits in a given number

Sample Input 
12345
Sample Output 
5
----------------------------------------------

#include <stdio.h>
int main()
{  
    long long int len=0,n;
    scanf("%ld",&n);
    while(n!=0)
    {   
        n=n/10;
        len=len+1;
    }
    
    printf("%d",len);
    return 0;
}
