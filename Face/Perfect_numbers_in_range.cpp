#include <iostream> 
using namespace std; 

int main(){
    int n,i,j,sum,num1,num2,count=0;
    cin>>num1>>num2;
     /* Iterate from 1 to end */
    for(i=num1; i<=num2; i++)
    {
        sum = 0;

        /* Check whether the current number i is Perfect number or not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
 
     
        if(sum == i)
        {
            cout<<i<<" ";
        }
    }
  
 
return 0;
}
