#include<stdio.h>
struct add
{
int a,b,c;
};
int main()
{
struct add s;
printf("enter two numbers:");
scanf("%d%d",&s.a,&s.b);
s.c=s.a+s.b;
printf("sum:%d\n",s.c);
return 0;
}