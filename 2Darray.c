#include<stdio.h>
int main()
{
int a[2][3]= {{1,2,3},{4,5,6}};
printf("%d",a[1][1]);
for(int i=0;i<2;i++)
for(int j=0;j<3;j++)
{
   a[1][2]=8;
    printf(" \t%d\n",a[i][j]);
}
return 0;
}