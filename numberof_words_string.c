#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,words;
    words=1;
    printf("enter the string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    {
    words++;
    }
    }
    printf("total number of word:%d",words);
    return 0;
}