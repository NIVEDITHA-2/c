#include<stdio.h>
int main()
{
    int a[]={10,15,20,25,30};
    printf("%d",a[3]);
    a[4]=50;/*to interchange the value of 4th index*/
    for(int i=0;i<=4;i++)
    {
        printf(" %d\t",a[i]);
    }
    return 0;

}