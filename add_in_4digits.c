#include<stdio.h>
main ()
{
 
int number, last_digit, first_digit, total;
scanf ("%d", &number);
last_digit = number % 10;
total = last_digit;
first_digit = (number / 1000) % 10;
total = total + first_digit;
printf ("%d", total);
}
