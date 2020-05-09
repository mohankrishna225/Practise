fp = fopen("input.txt", "r"); // Check if file exists 
if (fp == NULL)
{
printf("Could not open file %s", "input.txt");
 return 0;
}
// Extract characters

from file and store in character c

for (c = getc(fp); (c != EOF) && (count<n-1); c = gete(fp))
{
fscanf(fp,"%[^\n]", ch); 
printf("%s\n", ch); 
if (c == '\n') // Increment count if this character is newline
{
count = count + 1;
}
}
// Close the file 
fclose(fp);

return 0;