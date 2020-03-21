#include<stdio.h>
int main()
{
	
	int n,i,j,k=0,flag,temp;
	int index =0 ;
	scanf("%d",&n);
	int a[n][n];
	int num = n*n;
	int b[num];
	int top = 0, bottom = n - 1;
	int left = 0, right = n - 1;
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
	//printf("1D array is: ");
	//for(k=0;k<n*n;k++)
	//{
	//	printf("%d ",b[k]);
	//}
	//printf("\n");
	
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
//	k=0;
//	for(i=0;i<n;i++)
//	{
//		for(j=0;j<n;j++)
//		{
//			a[i][j]=b[k++];
//		}
//		
//	}


//sorted 1d Array
//for(k=0;k<n*n;k++)
//{
//	printf("%d ",b[k]);
//}
   
   
   	while (1)
	{
		if (left > right)
			break;
		// print top row
		for (i = left; i <= right; i++)
			a[top][i] = b[index++];
		top++;

		if (top > bottom)
			break;
		// print right column
		for (i = top; i <= bottom; i++)
			a[i][right] = b[index++];
		right--;

		if (left > right)
			break;
		// print bottom row
		for (i = right; i >= left; i--)
			a[bottom][i] = b[index++];
		bottom--;

		if (top > bottom)
			break;
		// print left column
		for (i = bottom; i >= top; i--)
			a[i][left] = b[index++];
		left++;
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
