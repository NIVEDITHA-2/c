#include<stdio.h>
int main()
{
    int number,i;
    printf("enter an integer:");
    scanf("%d\n",&number);
    printf("multiplication table of %d:\n",number);
    for(i=1;i<=10;i++)
    {
    printf("%d*%d = %d\n",number,i,number*i);/*multiplication process*/
    }
    return 0;

}