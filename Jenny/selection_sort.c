#include<stdio.h>

int main()
{
	int n,i,j,temp;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{  
		scanf("%d",&a[i]);
		
	}

    for(i=0;i<n-1;i++)
{
	 int min =i; //taking first element as min number;//
	 for(j=i+1;j<n;j++)  //Normal Linear Search for finding the min element //
	 {
	 	if(a[j]<a[min])  // if new min element if found update that location //
		 {
	 		min=j;
	 		
		 }
	 }
	   if(min!=i)    // if min value is changed then swap a[i] and a[min];//
	    {
	      temp=a[i];
	      a[i]=a[min];
	      a[min]=temp;
	 	
	    }
}

	for(i=0;i<n;i++)
	{   //Output
		printf("%d ",a[i]);
		
	}
		
	
	return 0;
}
