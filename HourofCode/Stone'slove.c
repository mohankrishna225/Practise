#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,q,i,ans,result;
    scanf("%d %d",&n,&q);
    long long int a[n+1],find;
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if(i!=1)
        {
            a[i]=a[i]+a[i-1];
            
        }
    }
   // for(i=1;i<n+1;i++)
    //printf("%d",a[i]);
    while(q--)
    {
        scanf("%d",&find);
        int low=1,mid,high=n;
        while(low<=high)
        {
              mid=(low+high)/2;
              if(a[mid]<find)
              {
                  low=mid+1;
              }
              else if(a[mid]>=find)
              {
                  high=mid-1;
                  ans=mid;
              }
        }
        printf("%d\n",ans);
    }
    return 0;
}
