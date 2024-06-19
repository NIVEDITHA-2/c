#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("enter your choice:\n");
    printf("1. addition\n 2.subtraction\n 3.multiplication\n 4.division\n\n");
    scanf("%d",&choice);
    if(choice>4)
    {
    printf("you have entered the wrong choice:\n");
    }
    else
    {
    printf("enter two integers:\n");
    scanf("%d %d",&a,&b);
    }
    if (choice==1)
    {
    printf("the addition of %d and %d is %d:\n",a,b,(a+b));
    }
    else if (choice==2)
    {
    printf("the subtraction of %d and %d is %d:\n",a,b,(a-b));
    }
    else if(choice==3)
    {
    printf("the multiplication of %d and %d is %d:\n",a,b,(a*b));
    }
    else if(choice==4)
    {
    if(b!=0)
    printf("the division of %d and %d is %d:\n",a,b,(a/b)); 
    else
    printf("number cannot be divided by 0\n");  
    }
    else
    {
    printf("please enter the given no 1  2  3  4:");   
    }
    return 0;

}
