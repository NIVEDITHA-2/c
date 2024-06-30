#include<stdio.h>
#include<string.h>
int main()
{
    int i,length,set=0;
    char string[20];
    printf("enter the string");
    scanf("%s",&string);
    length=strlen(string);
    for(i=0;i<length;i++)
        if(string[i]!=string[length-i-1])
{
    set=1;
    break;
}
if (set==1)
{
    printf("the string is not palindrome");
}
    else
    {
    printf("string is palindrome");
return 0;
    }

}
