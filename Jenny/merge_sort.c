#include<stdio.h>
void mergesort(int a[],int lb,int ub);
void merge(int a[],int lb,int mid,int ub);

void mergesort(int a[],int lb,int ub)
{
	int mid;
	if(lb<ub)
	{ 
		mid = (lb+ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

void merge(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int b[10];
	int j=mid+1;
	int k=lb;
    while(i<=mid && j<=ub)
    {
    	if(a[i]<=a[j])
    	{
    		b[k]=a[i];
    		i=i+1;
		}
		else
		{
			b[k]=a[j];
			j=j+1;
		}
		k++;
	}
	
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	
    for(k=lb;k<=ub;k++)
    {
    	a[k]=b[k];
	}

}
	

int main()
{
	int loc,start,end,n,i;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	mergesort(a,0,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
    }
	
	
	return 0;
}
