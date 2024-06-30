#include<stdio.h>
int main()
{
    float gs,da,bs,hra;
    printf("enter the basic salary:\n");
    scanf("%f",&bs);
    if(bs>10000)
    { hra=500;
      da=bs*95/100;
    }
    else
    {
     hra=bs*10/100;
     da=bs*90/100;  
    }
    gs=bs+da+hra;
    printf("the gross salary is Rs%f:",gs);
    return 0;
}
    

