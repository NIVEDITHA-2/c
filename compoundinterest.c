#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    float r,ci;
    printf("enter the principal amount:\n");
    scanf("%d",&p);
    printf("enter the time of period:\n");
    scanf("%d",&t);
    printf("enter the rate of interest:\n");
    scanf("%f",&r);
    ci=p*pow((1+r/100),t);
    printf("the compound interest %f:\n",ci);
    return 0;

}