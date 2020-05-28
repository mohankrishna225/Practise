#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	string st = "helleh";
	getline(cin,st);
	int flag = 1,i = 0,j = st.length()-1;
	while(i < j)
	{
		if(st[i] != st[j])
		{
			flag = 0;
			break;
		}
		i++;
		j--;
	}
	if(flag == 1)
		cout<<"palindrome";
	else
		cout<<"No";
}
