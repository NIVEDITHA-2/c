#include<stdio.h>
int main()
{
int a[]={10,15,20,25,30};
int length=sizeof(a)/sizeof a[0];/*to find length of array*/
for(int i=0;i<length;i++)/*to print the whole array*/
{
printf("%d\n",a[i]);
}
    return 0;

}