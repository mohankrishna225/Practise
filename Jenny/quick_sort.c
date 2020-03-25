#include<stdio.h>
void quicksort(int a[],int lb,int ub);
int partition(int a[],int lb,int ub);
	
	int partition(int a[],int lb,int ub)
	{
		int pivot=a[lb];
		int start=lb;
		int end=ub;
		while(start<end)
		{
			while(a[start]<=pivot)
			{
				start++;
			}
			while(a[end]>pivot)
			{
				end--;
			}
			if(start<end)
			{
				int temp=a[start];
				a[start]=a[end];
				a[end]=temp;
			}
		}
		int temp=a[lb];
		a[lb]=a[end];
		a[end]=temp;
		
		return end;
	}
	
	
	void quicksort(int a[],int lb,int ub)
	{
		if(lb<ub)
		 { 
			
		
		    int loc = partition(a,lb,ub);
		    quicksort(a,lb,loc-1);
		    quicksort(a,loc+1,ub);
	     
		 }
	}

int main()
{
	int loc,start,end,pivot,n,i;
	printf("Enter the size of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	quicksort(a,0,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
    }
	
	
	return 0;
}
