#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter array elements:\n");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
        printf("sum of array is: %d\n",sum);
    
    return 0;
}
