#include<stdio.h>
int main()
{
    char string[20],i;
    printf("enter a string:\n");
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++);
    printf("length of the input string:%d",i);
    return 0;

}