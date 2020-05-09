int checkPrimeNumber(int n)
{
    	int i,flag=1;
	for(i=2;i<=n/2;++i)
	{
         if(n%i==0)
	{
 	  flag=0;
	  break;
	}
	}
   return flag;
}
int checkArmstrongNumber(int number)
{
 	int originalNumber,rem,result=0,n=0,flag;
 	originalNumber = number;
	while(originalNumber!=0)
	{
 	originalNumber/=10;
 	++n; 
	}
	originalNumber=number;
 	while(originalNumber!=0)
	{
 	rem=originalNumber%10;
	result+=pow(rem,n);
	originalNumber/=10;
	}

 	if(result==number)
		flag=1;
	else
		flag=0;

return flag;
}