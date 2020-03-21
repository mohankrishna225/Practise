#include<stdio.h>
int maxofrow(int r[],int n)
{
	int max=r[0],i;
	for(i=0;i<n;i++)
	{
		if(r[i]>max)
		{
			max=r[i];
		}
	}
	return max;
}

int minofcol(int c[],int n)
{
	int min=c[0],i;
	for(i=0;i<n;i++)
	{
		if(c[i]<min)
		{
			min=c[i];
		}
	}
	return min;
}

int main()
{
  
   int n,i,j,min,max,mr,mc;
   scanf("%d",&n);
   int a[n][n],r[n],c[n];
   for(i=0;i<n;i++)
   {
   	  for(j=0;j<n;j++)
   	    {
   		   scanf("%d",&a[i][j]);
     	}  
	} 
	
	for(i=0;i<n;i++)
	{
		min = a[i][0];  // all column values;
		for(j=1;j<n;j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
			}
		}
		r[i]=min;
	}
	
	for(i=0;i<n;i++)
	{
		max=a[0][i];  //all row values;
		for(j=1;j<n;j++)
		{
			if(a[j][i]>max)
			{
				max=a[j][i];
			}
		}
		c[i]=max;
	}
	
	mr = maxofrow(r,n);
	mc = minofcol(c,n);
	
	if(mr==mc)
	{
		printf("The %d square grid is nice",n);
	 } 
	 else
	 {
	 	printf("The %d square grid is not nice",n);
	 }
 
 

	return 0;
}

// 
