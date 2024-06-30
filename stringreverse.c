#include<stdio.h>
#include<string.h>
int main()
{
 char str[20];
 int i,j;
 printf("enter the string");
 scanf("%s",&str);
 int len=strlen(str);
 for(i=0,j=len-1;i<=j;i++,j--)
 {
    char c=str[i];
    str[i]=str[j];
    str[j]=c;
 }
 printf("the reverse of the string is %s",str);
 return 0;
}


