#include<stdio.h>
int main()
{
    int num,rem,sum=0,temp;
    printf("enter the number:\n");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
    }
    if(temp==sum)
    {
        printf("%d is armstrong number",temp);
    }
    else
    {
        printf("%d is not armstrong number",temp);
    }
    return 0;
    }

