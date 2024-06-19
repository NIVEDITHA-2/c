#include<stdio.h>
void average(int,int,int,int,int);
void main()
{
    int a,b,c,d,e;
    printf("enter five numbers:\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average(a,b,c,d,e);
    getch();
}
void average(int a,int b,int c,int d,int e)
{
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("the average is: %f\n ",avg);
}