#include<stdio.h>
int main()
{
    const float pi=3.14;
    float radius;
    printf("enter the radius:\n");
    scanf("%f:\n",&radius);                  // area=pi*radius*radius;
    printf("the area of the circle is :%f\n",(pi*radius*radius));
    return 0;
}