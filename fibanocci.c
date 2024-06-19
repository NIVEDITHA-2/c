#include<stdio.h>
int main()
{
int t1,t2,n,nt;
t1=0;
t2=1;
printf("enter the number of terms\n");
scanf("%d",&n);
printf("%d %d ",t1,t2);
nt=t1+t2;
for(int i=3;i<=n;i++)
{
printf("%d ",nt);
t1=t2;
t2=nt;
nt=t1+t2;
}
return 0;
}