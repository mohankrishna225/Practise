#include<stdio.h>
#include<stdlib.h>
struct Student{
	 int stud_no;
	 char stud_name[30];
	 char stud_addr[30];
	 int stud_percentage;

};
int main()
{
	FILE *fp;
	char c;
	int n;
	struct Student s[10];
	scanf("%d",&n);
	fp=fopen("input.txt","w")l
	for(int i=0;i<n;i++)
	{
		scanf("%d%s%s%d",&s[i].stud_no,&s[i].stud_name,&s[i].stud_addr,&s[i].stud_percentage);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d%s%s%d",s[i].stud_no,s[i].stud_name,s[i].stud_addr,s[i].stud_percentage);
	}
	fclose(fp);
	fp=fopen("input.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);

	}
	fclose(fp);
	return 0;
}