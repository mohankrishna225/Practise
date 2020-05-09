char str[100];
fp = fopen("input.txt","a");
scanf("%[^\n]",str);
fprintf(fp,str);
fclose(fp);