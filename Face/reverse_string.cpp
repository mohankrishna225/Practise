#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100], temp;
	int i=0, j;
	cin.getline(str,100);
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	cout<<str;
}
