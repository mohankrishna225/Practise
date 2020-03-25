c Program to find the product of the digits in a given number
Sample Input 
123
Sample Output 
6

----------------------------------------------------------------------------
#include <stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int rem,num,product;
    scanf("%d",&num);
    for(product=1;num>0;num=num/10)
    {
        rem = num % 10;
        product = product * rem;
        
    }
    printf("%d",product);
    return 0;
}
