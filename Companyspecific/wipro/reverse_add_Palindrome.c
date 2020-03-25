#include<stdio.h>
int rev(int num)
{
	int rev =0;
	while(num>0)
	{
	    rev = rev *10 + (num%10);
		num=num/10;
	}
	return rev;
}

int palindrome(int num)
{
	int flag;
	if(rev(num)==num)
	{
		flag=1;
	}
	else
	{
		flag=0;
	}
	return flag;
}

int reverse_add(int num)
{
	int rev_num =0,count=0;
	while(count<5)
	{
		rev_num = rev(num);
		
		num = num + rev_num;
		if(palindrome(num)==1)
		{
			return num;
			break;
		}
		else
		{
			count++;
		}
		
		
		
	}
	if(count>5)
	{
		return -1;
	}

}

int main()
{
	int num,pal;
	scanf("%d",&num);
	//printf("%d",rev(num));
//	if(palindrome(num)==1)
//	{
//		printf("Palindrome");
//	}
     
	printf("%d",reverse_add(num));
	return 0;
}
