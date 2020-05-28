#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	string r1="",r2="";
	int i=0;
	
	while(s1[i]!="\0")
	{
		if(s1[i]>="a" && s1[i]<="z")
		{
			r1+=s1[i];
		}
		else if(!r1.empty())
		{
			r1.pop_back();
		}
		++i;
	}
	
	i=0;
	while(s2[i]!="\0")
	{
		if(s2[i]>="a" && s2[i]<="z")
		{
			r2+=s2[i];
		}
		else if(!r2.empty())
		{
			r2.pop_back();
		}
		++i;
	}
	if(r1.compare(r2)==0)
	{
		return cout<<"Same";
	}
	
	
	return cout<<"Not same";
}
