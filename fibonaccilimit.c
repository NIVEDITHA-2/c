#include<stdio.h>
int main()
{
    int n,t1,t2,nt;
    t1=0;
    t2=1;
    printf("enter the limit:\n");
    scanf("%d",&n);
    nt=t1+t2;
    printf("%d %d ",t1,t2);
    while(nt<=n)
    {
        printf("%d ", nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    return 0;
}