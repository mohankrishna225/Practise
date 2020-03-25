#include<stdio.h>
void recursive(int n)
{
	if(n==0)
	{
		return 0;
	}
	recursive(n-1);
	printf("%d ",n);
}
int main(){
	recursive(10);
	return 0;
}

//1 2 3 4 5 6 7 8 9 10
