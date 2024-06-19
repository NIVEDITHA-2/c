#include<stdio.h>
int square();
void main()
{
    float area;
    area=square();
    printf("the area of the square is:%f\n",area);
    getch();
}
int square()
{
float side;
printf("enter the length of the side in meters:");
scanf("%f",&side);
return side*side;
}

