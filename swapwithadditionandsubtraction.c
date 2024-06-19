#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value for a and b:");
    scanf("%d%d",&a,&b);
    {
    a=a+b;//a=a*b
    b=a-b;//b=a/b
    a=a-b;//a=a/b
    {
    printf("after swapping a=%d\n b=%d",a,b);
    }
    return 0;
}
}