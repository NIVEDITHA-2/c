#include<stdio.h>
int main()
{
  int n,t1,t2,nt;
  t1=0;
  t2=1;
  printf("enter the term:");
  scanf("%d",&n);
  do
  {
    if(n<=0)
    {
        printf("enter a valid number of limit:");
        scanf("%d",&n);
    }
  }
    while(n<=0);
    if(n==1)
    printf("%d",t1);
    else if(n==2)
    printf("%d%d",t1,t2);
    else
    {  
    nt=t1+t2;
    for(int i=3;i<=n;i++)
    {
    if(i==n)
    printf("%d",nt);    
    nt=t1+t2;
    t1=t2;
    t2=nt;
    }
    }

}