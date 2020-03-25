#include<stdio.h>
int main()
{
	int i,num,flag,j,temp;
	printf("Enter the number of elements: ");
	scanf("%d",&num);
	int arr[num];
	for(i=0;i<num;i++){
		scanf("%d",&arr[i]);
		
	}
			
	for(i=0;i<num-1;i++)
	{  flag=0; //set the Flag
	  for(j=0;j<num-1-i;j++)   //num-1-i for reducing the comparision between the highest element already sorted at each outer loop.//
	    {
	      if(arr[j]>arr[j+1])
          {
		  
		  temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          flag=1; //IF swapping is Done set Flag = 1
	      }
	    }
	  if(flag==0) //IF no swapping is Done then it means it's already sorted no need of further sorting //
	  {
	  	break;
	  }
	}
	
	
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
		
	}
	
	return 0;
	
}
