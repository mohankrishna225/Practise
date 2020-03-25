#include<stdio.h>
int main()
{  int a[1441]={0};
    int i,j,x,y,e,b,c,d,n,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { scanf("%d %d %d %d",&e,&b,&c,&d);
        x=e*60+b;
        y=c*60+d;
        for(j=x;j<=y;j++)
        {a[j]=a[j]+1;
        }
    }
    for(i=0;i<=(24*60);i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d\n",max);
}
