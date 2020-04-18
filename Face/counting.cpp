#include<iostream> 
using namespace std;
int main()
{
    char str[200];
    int i,vowels=0,consonants=0,digits=0,spaces=0,specialCharacters=0;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            consonants++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else if (str[i]==' ')
        {
            spaces++;
        }
        else
        {
            specialCharacters++;
        }
    }
    cout<<"Vowels:"<<vowels;
    cout<<"\nConsonants:"<<consonants;
    cout<<"\nWhite Spaces:"<<spaces;
    cout<<"\nDigits:"<<digits;
    cout<<"\nSymbols:"<<specialCharacters;
    
}
