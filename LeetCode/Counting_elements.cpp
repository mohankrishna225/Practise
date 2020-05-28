//count element x such that x+1 is also in arr.
//1 2 3 ==> 2 // 1 1 3 3 5 5 ==> 0;
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n<=1)
	{
		return 0;
	}
	sort(arr,arr+n);
	int left = 0,right =1,count=0;
	
	while(right<n)
	{
		if(arr[right]==1+arr[left])
		{
			count+=(right-left);
			left=right;
			right+=1;
		}
		else if(arr[right]==arr[left])
		
		{
			right+=1;
		}
		else
    	{
			left = right;
			right+=1;
	    }
	}
	
	cout<<count;
	return 0;
}
