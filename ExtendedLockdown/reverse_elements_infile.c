int cnt=0;
int i=0;
fp1= fopen("input.txt","r");
fseek(fp1,0,SEEK_END);
cnt = ftell(fp1);

while(i<cnt)
{
	i++;
	fseek(fp1,-i,SEEK_END);
	printf("%c",fgetc(fp1));

}
fclose(fp1);
return 0;
}