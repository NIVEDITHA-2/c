#include<stdio.h>
int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%100==0)
    {
    if(year%400==0)
    {
    printf("%d is the leap year",year);
    }
    else
    {
    printf("%d is not leap year",year);
    }
    }
    if(year%4==0)
    {
    printf("%d is the leap year",year);
    }
    else
    {
    printf("%d is not leap year",year);
    }
    return 0;
}