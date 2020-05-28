#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	char temp;
	string st = "hello";
	getline(cin,st);
	int i = 0,j = st.length()-1;
	while(i < j)
	{
		temp = st[j];
		st[j] = st[i];
		st[i] = temp;
		i++;
		j--;
	}
	cout<<st;
}
