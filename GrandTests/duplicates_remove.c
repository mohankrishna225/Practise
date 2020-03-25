#include<stdio.h>
int main()
{
    int i, j, k,exists,key, size;
    scanf("%d", &size);
    int arr[size],arr2[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
	//logic 
	for(i=0,j=0;i<size;i++)
	{
		key =arr[i];exists=0;
		for(k=0;k<i;k++)
		{
			if(arr2[k]==key)
			{
				exists=1;
			}
		}
		
		if(!exists)
		{
			arr2[j]=arr[i];
			j++;
			
		}
		
	}
     
     
     
    
    for (i = 0; i < j; i++) {
        printf("%d ", arr2[i]);
    }
    
    return 0;
}
