
#include<stdio.h>
#include<string.h>
int main()
{
char s[20]="hello";
char q[20];
strcpy(q,s);
printf("s:%s\n",s);
printf("q:%s\n",q);
return 0;
}