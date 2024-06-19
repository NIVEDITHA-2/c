#include<stdio.h>
int main()
{
    int num,count,fact=1;
    printf("enter the number:\n");
    scanf("%d",&num);
    for(count=1;count<=num;count++)
    {
        fact=fact*count;
        printf("the factorial of the %d is %d",count,fact);
    }
    return 0;
}