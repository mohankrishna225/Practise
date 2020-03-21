#include<stdio.h>
int main()
{
	int width,height,length;
	scanf("%d %d %d",&length,&width,&height);
	
	if((length<1 && length>1000) || (height<1 && height>1000) || width<1 && width>1000)
	{
		return 0;
	}
	
	if(width==length && height==length) 
	{
		printf("ACCEPTED");
	}
	else if(width<length || height<length)
	{
		printf("CHANGE");
	}
	else if(width>length || height>length)
	{
		printf("CROP");
	}
	
	return 0;
	
}

// 180 180 180
// 150 640 540
// 175 150 180
