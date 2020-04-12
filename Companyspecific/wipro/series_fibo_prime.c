#include <stdio.h>

//fibonacci series
int fib(int n)
{
    if (n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fib(n-1)+fib(n-2));
}

//prime number function
//https://www.codesdope.com/blog/article/prime-numbers-using-sieve-algorithm-in-c/
int prime(int n)
{
    int number,i,j;
    number = 1000;

    int primes[number+1];

    //populating array with naturals numbers
    for(i = 2; i<=number; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= number)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<number; j++)
            {
                if (primes[i]*j > number)
                    break;
                else
                    // Instead of deleteing , making elemnets 0
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }

    int counter = 0;
    for(i = 2; i<=number; i++)
    {
        //If number is not 0 then it is prime
        if (primes[i]!=0)
        {
            counter++;
            if(counter==n)
                return primes[i];
        }
    }
    return 0;
}

int main()
{
    int i;
    for (i=1;i<21;i++)
    {
        if(i%2==0)
        {
            //prime
            printf("%d\n",prime((i/2)));
        }
        else
        {
            //fibonacci
            printf("%d\n",fib((i/2)+1));
        }
    }
    return 0;
}
