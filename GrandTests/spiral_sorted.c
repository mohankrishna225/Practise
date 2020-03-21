#include<stdio.h>
int main()
{
	int n,i,j,k=0,flag,temp;
	int a[5][5],b[20];
	scanf("%d",&n);
	int num = n*n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}
	
//	for(k=0;k<n*n;k++)
//	{
//		printf("%d ",b[k]);
//	}
	
		for(i=0;i<num-1;i++)
	{  flag=0; //set the Flag
	  for(j=0;j<num-1-i;j++)   //num-1-i for reducing the comparision between the highest element already sorted at each outer loop.//
	    {
	      if(b[j]>b[j+1])
          {
		  
		  temp=b[j];
          b[j]=b[j+1];
          b[j+1]=temp;
          flag=1; //IF swapping is Done set Flag = 1
	      }
	    }
	  if(flag==0) //IF no swapping is Done then it means it's already sorted no need of further sorting //
	  {
	  	break;
	  }
	}
	
	//sorted array
	k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=b[k++];
		}
		
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
		
	}	
	
	
	
	return 0;
}
