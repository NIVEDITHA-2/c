#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i,prime=0;
    for(i=2;i<=n/2;i++)
if(n%i==0)
{
    prime=1;
    break;
}

if (prime==0)
{
    printf("it is a prime number");
}
    else
    {
    printf("it is not a prime number");
}
return 0;
}
