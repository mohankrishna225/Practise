int lower =0;
int i;

char ch;

fptr=fopen("input.txt","r");
i=0;
ch = fgetc(fptr);
	while(ch!=EOF)
	{
	if((ch>='a') && (ch<='z'))
	{
	lower++;
	}
	ch=fgetc(fptr);
	}
	printf("%d",lower);
	fclose(fp);
	return 0;
	}