#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j,Count=0,find,k=0;
	cin>>m>>n>>find;
	int a[m*n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			Count++;
			if(i==0 || i==(m)|| j==0)
			{
				a[k++]=Count;
		     	
			}
		     	
		}
	}
	    int flag =0;
		for(i=0;i<m+n;i++)
		{
		//	cout<<" "<<a[i];
		  if(find==a[i])
	     	{
		     	flag = 1;
	     	}
	   
		}
		
		if(flag==1)
		{
			cout<<"Yes";	
		}
		else
		{
			cout<<"No";
	    }
		
	
	return 0;
}
