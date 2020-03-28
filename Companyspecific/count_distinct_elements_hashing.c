#include<stdio.h>
int main()
{

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

void countDistinct(int arr[], int n, int k)

{

    // Traverse through every window
    int i;
    for (i=0; i<=n-k; i++)

       printf("%d",countWindowDistinct(arr+i, k));

}



	return 0;
	
}
