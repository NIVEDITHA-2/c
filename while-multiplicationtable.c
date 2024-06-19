#include<stdio.h>
int main()
{
    int number,i,range;
    printf("enter the integer:\n");
    scanf("%d",&number);
do
{
printf("enter the range:\n");
scanf("%d",&range);
}
while (range<=0);
printf("multiplication of %d till range is %d:\n",number,range);
for(i=1;i<=range;i++)
{
    printf("%d*%d=%d \n",number,i,number*i);
    }
return 0;
}