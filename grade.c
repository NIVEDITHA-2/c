#include<stdio.h>
int main()
{
    int m;
    printf("enter the mark:");
    scanf("%d",&m);
    if (m>=90&&m<=100)
    {
        printf("A+");
    }
        else if (m>=80&&m<90)
            {
                printf("A");
            }
            else if (m>=70&&m<80)
            {
                printf("B+");
            }
            else if (m>=60&&m<70)
            {
                printf("B");
            }
            else if (m>=50&&m<60)
            {
                printf("C+");
            }
            else if (m>=40&&m<50)
            {
                printf("C");
            }
            else if (m<40)
            {
                printf("failed");
            }
            
            return 0;
}
    