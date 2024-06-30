#include<stdio.h>
int main()
{
    int m,n,a[50],b[50],i,j;
    int temp;
    printf("enter the limit in first array :");
    scanf("%d",&m);
    printf("enter the numbers:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the limit in second array :");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("\nfirst array after sorting:");
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
    {
    if (a[i]>a[j])
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
       printf("%d",a[i]);
    
    }
    printf("\nsecond array after sorting:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
            printf("%d",b[i]);
    }
            printf("\nsingle sorted array:");
            j=0;
            for(i=m;i<m+n;i++)
                {
                 if(a[i]=b[j]);
                 j++;
                }
                for(i=0;i<m+n;i++)
                {
                    for(j=i+1;j<m+n;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                    printf("%d",a[i]);
                }
                return 0;
}
