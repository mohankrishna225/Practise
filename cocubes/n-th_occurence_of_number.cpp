#include<stdio.h>
int main()
{
int a[100],position,i,element,size,count=0;
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&a[i]);
scanf("%d",&element);
scanf("%d",&position);
for(i=0;i<size;i++)
{
if(element==a[i])
count++;
//If 'n'th occurrence found then print it's index and exit.
if(count==position)
{
printf("%d",i);
return 0;
}
}
//If 'n' occurrence not found then print '-1'.
printf("%d",-1);
return 0;
}
