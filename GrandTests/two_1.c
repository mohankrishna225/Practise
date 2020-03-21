#include <stdio.h>
#include <string.h>
#include <math.h>
//denomination Cash //
int main() 
{

    int cash=0, one=0, two=0, five=0, ten=0, fifty=0, hundred=0,sum=0;
    scanf("%d", &cash);
    if(cash>=100)
    {
        hundred = cash/100;
        cash = cash%100;
    }

    if(cash>=50)
    {
        fifty = cash/50;
        cash = cash%50;
    }

    if(cash>=10)
    {
        ten = cash/10;
        cash = cash%10;
    }
    if(cash>=5)
    {
        five = cash/5;
        cash = cash%5;
    }
    if(cash>=2)
    {
        two = cash/2;
        cash = cash%2;
    }
    if(cash>=1)
    {
        one = cash;
    }
    sum=hundred+fifty+ten+five+two+one;
    printf("%d",sum);
    return 0;

}

