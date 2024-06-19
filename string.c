#include<stdio.h>
int main()
{
char s[]="hello world";
s[0]='j';/*to change the first variable in'hello' to 'j'*/
int length=sizeof(s)/sizeof s[0];
for(int i=0;i<length;i++)
printf("%c",s[i]);
return 0;
}