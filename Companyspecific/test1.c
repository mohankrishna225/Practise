#include<stdio.h>
int main()
{
	const char* p="12345";
	const char **q=&p;
	*q="abcde";
	const char *s = ++p;
	p = "XYZWVU";
	printf("%c",*++s);
	return 0;
}
