#include<stdio.h>
// Counts distinct elements in window of size k

int countWindowDistinct(int win[], int k)

{

    int i;
     int dist_count = 0;


    // Traverse the

    for (i=0; i<k; i++)

    {

        // Check if element arr[i] exists in arr[0..i-1]

        int j;

        for (j=0; j<i; j++)

           if (win[i] == win[j])

              break;

        if (j==i)

            dist_count++;

    }

    return dist_count;

}


// Counts distinct elements in all windows of size k

int countDistinct(int arr[], int n, int k)

{

    // Traverse through every window
    int i;
    for (i=0; i<n-k; i++)

       printf("%d\n",countWindowDistinct(arr+i, k));

}

int main()
{
    
	int n,k,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
    countDistinct(arr, n, k);
	return 0;
	
}
