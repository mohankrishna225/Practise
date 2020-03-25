Print all the prime digits in a given number
Sample Input 
12345
Sample Output 
2 3 5 

-------------------------------------------------------------------

#include<stdio.h>
//int checkPrimeNumber(int n);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,rnum,rem,num=0,product,flag;
    scanf("%d",&rnum);
    while (rnum != 0) {
        rem = rnum % 10;
        num = num * 10 + rem;
        rnum /= 10;
    }
    
    int checkPrimeNumber(int n) {
    int i, flag = 1;
    for (i = 2; i <= n / 2; i++) {
        // condition for non-prime number
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}



for(product=1;num>0;num=num/10)
    {
        rem = num % 10;
        if(rem>=2)
        {
         flag = checkPrimeNumber(rem);
         if (flag == 1)
         {
            printf("%d ", rem);
         }
        }
    }
    
    return 0;
}
