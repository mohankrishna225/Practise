#include <stdio.h>
 
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int n,m,i,j;
scanf("%d%d",&n,&m);
int a[n];
for(i=0;i<n;i++) scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
int temp;
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
int max=0,min=0,ans;
for(i=m;i<n;i++) max=max+a[i];
for(i=0;i<n-m;i++) min=min+a[i];
 
ans=max-min;
printf("%d\n",ans);
}
return 0;
}
