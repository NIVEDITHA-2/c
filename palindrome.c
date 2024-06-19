#include<stdio.h>
int main()
{
    int num,rem,reverse=0,temp;
    printf("enter the number:");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    printf("reversed number is %d\n",reverse);
    if(temp==reverse)
    {
    printf("the number is palindrome");
    }
    else
    {
    printf("the number is not palindrome");
    }
    return 0;
}
