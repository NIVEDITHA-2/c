#include<stdio.h>
int main()
{
    int firstnumber,secondnumber,temp;
    printf("enter the first number:\n");
    scanf("%d",&firstnumber);
    printf("enter the second number:\n");
    scanf("%d",&secondnumber);
    temp=firstnumber;
    firstnumber=secondnumber;
    secondnumber=temp;
    printf("after swapping the first number: %d\n",firstnumber);
    printf("after swapping the second number: %d\n",secondnumber);
    return 0;
}