#include<stdio.h>
#define MAX_SIZE 20
int main()
{
int n, i, j, min_index, array[MAX_SIZE], x;
scanf("%d", &n);
for(i = 0; i < n; i++)
scanf("%d", &array[i]);
scanf("%d", &x);
for(i = 0; i < n; i++)
{
if(x == array[i])
{
printf("Foundn");
return 0;
}
}
printf("Missingn"); 
return 0;
}
