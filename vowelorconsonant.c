#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
     ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
{
    printf(" is vowel");
}
else
{
    printf(" is consonant");
}
return 0;
}