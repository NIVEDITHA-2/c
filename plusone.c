#include<stdio.h>
int main()
{
    int i,a[50],n,s;
    printf("enter the array limit:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if (a[n-1]<9)
    {
        s=a[n-1]+1;
        a[n-1]=s;
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    }
    else if (a[n-1]>=9&&a[n-1]<100)
    {
        s=a[n-1]+i;
        a[n-1]=s/10;
        s=s%10;
        a[n]=s;
         for(i=0;i<=n;i++)
        {
            printf("%d",a[i]);
        }
    }
    else
    {
        s=a[n-1]+1;
        a[n-1]=s/10;
        s=s%10;
        a[n]=a[n-1]/10;
        a[n-1]=a[n-1]%10;
        a[n+1]=s;
        for(i=0;i<=n+1;i++)
        {
            printf("%d",a[i]);

        }
        return 0;
    }
    }
    