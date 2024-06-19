#include<stdio.h>
int sum(int,int);
void main()
{
    int a,b,c;
    printf("enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    c=sum (a,b);
    printf("the sum is :%d\n",c);
    getch();
}
int sum (int a,int b)
{
    return a+b;
}