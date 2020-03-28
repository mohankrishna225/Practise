#include<stdio.h>
int what_is(char *s)
{
	int v=0,f=1,c;
	while(c=*s++)
	{
		v +=(c-'0')*f;
		f=f*10;
	}
	return v;
}
int main()
{
	printf("%d",what_is("123"));
	return 0;
}
