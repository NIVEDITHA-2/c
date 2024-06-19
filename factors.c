#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("the factors of %d are :\n",n);
    for(i=1;i<=n;i++)
    {
     if(n%i==0)  
     printf(" %d ",i);

    }
    return 0;
}