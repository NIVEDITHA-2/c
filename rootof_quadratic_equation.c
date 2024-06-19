#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float root_part,denom;
    printf("enter the values of a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        printf("not quadratic\n");
    
        printf("enter the non zero number for a\n");
    }
    else
    {
        root_part=sqrt(b*b-4*a*c);
        denom=2*a;
        root1=(-b+root_part)/denom;
        root2=(-b-root_part)/denom;
        printf("root1=%f\nroot2=%f",root1,root2);
        return 0;
    }

}