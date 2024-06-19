#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("enter the principle amount\n:");
    scanf("%d",&p);
    printf("enter the time period\n:");
    scanf("%d",&t);
    printf("enter the rate of interest\n:");
    scanf("%f",&r);
    si=p*t*r/100.00;
    printf("the simple interest is\n: %f",si);
    return 0;
}