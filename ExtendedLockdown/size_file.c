#include <stdio.h> 
#include <stdlib.h>

int main()


{
FILE *fp; 
char c; 
int size; 
char inputstring[1000]; 
fp =fopen("input.txt","w"); 
scanf("%[^\n]",inputstring); 
fprintf(fp,"%s", inputstring); 
fclose(fp);

fp = fopen("input.txt", "r"); 
fseek(fp, 0, 2);
size = ftell(fp); 
printf("The size of given file is : %d", size); 
fclose(fp);
return 0;
}