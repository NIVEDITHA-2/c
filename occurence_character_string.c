#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],ch;
    int i,count=0;
    printf("enter a string:");
    gets(str);
    printf("enter the character to be checked:\n");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {
    if (str[i]==ch)
    {
        count++;
    }
    }
printf("the character %c occurs %d times in the string:",ch,count);
return 0;

}