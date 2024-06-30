#include<stdio.h>
#define max 100
int main()
{
    int n,i,j,l,a[max],s,target,flag=0;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the target:");
    scanf("%d",&target);
    s=a[0];
    j=0;
    for(i=1;i<n;i++)
    {
        for(l=i;l<n;l++)
        {
            s=s+a[i];
            if(s==target)
            {
                flag=1;
                break;
            }
        }
        if (flag==1)
        break;
        else 
        {
            s=a[i];
            j=i;
        }
    }
    if(flag==0)
    printf("not matching with the indices");
    else
    printf("index:%d %d",j,i);
    return 0;
        }
            

