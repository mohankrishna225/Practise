Faceprep Coding On Cocubes :

-------------------------------------------------

Count the number of co-prime pairs in an array ?

Input
3
1 2 3

Output
3

here co-primes are (1,2),(2,3),(1,3) 

Code :
 
#include<stdio.h>
int coprime(int a, int b)
{ 
int gcd;
while ( a != 0 )
{
gcd = a; a = b%a; b = gcd;
}
if(gcd == 1)
return 1;
else
return 0;
}
int count_pairs(int arr[], int n)
{
int count = 0;
for (int i = 0; i < n - 1; i++)
{
for (int j = i + 1; j < n; j++)
{
if (coprime(arr[i], arr[j]))
   count++;
       }     
}
return count;
}

int main()
{
int n;
scanf("%d", &n);
int a[25], i;
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("%d", count_pairs(a, n));
return 0;
}