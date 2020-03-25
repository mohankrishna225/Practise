#include<stdio.h>
int main(){
	int n,i,j,temp;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	//worst case is when given in descending Order O(n2);// and best case is O(n) //
	for(i=1;i<n;i++)
	{
		//we take one variable as sorted and rest as unsorted and insert the elements into sorted list by comparing each one.
		
		temp = a[i]; 
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j]; //if a[j] is greater than temp value then shift the a[j] value to right// 
			j--;         
		}
		    a[j+1]=temp; //if found the correct place then store it .
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		
	}
		
	
	return 0;
}
