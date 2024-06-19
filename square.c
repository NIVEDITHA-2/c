#include<stdio.h>
int main()
{
    int i,j;
    int n=1;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
        }
        return 0;
    }
