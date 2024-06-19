#include<stdio.h>
int main(){
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("the person is eligible to drive");

    }
    else {
        printf("the person is not eligible to drive");
    }
    return 0;
}