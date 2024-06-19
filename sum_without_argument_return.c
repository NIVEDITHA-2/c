#include<stdio.h>
void sum();
void main()
{
    printf("going to calculate the sum of two numbers\n");
    sum();
    getch();
}
void sum()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("the sum is %d",a+b);
}