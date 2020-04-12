#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time,CI,SI,discount;
  //int CI;
    /* Input principle, time and rate */
    scanf("%f", &principle);
    scanf("%f", &rate);
    scanf("%f", &time);
    

    SI = ((principle*rate*time)/100);
    /* Calculate compound interest */
    CI = principle* (pow((1 + (rate / 100)), time));
    
    discount = SI*(0.02);
   
    printf("%.2f\n",SI);
    printf("%.2f\n", CI);
    printf("%.2f\n",discount);
    printf("%.2f",CI-discount);

    return 0;
}
