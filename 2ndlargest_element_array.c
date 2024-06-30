#include<stdio.h>
int main()
{
    int array[10]={45,26,35,17,100,50,67,21,10,1};
    int i,second,largest;
    if(array[0]>array[1])
    {
    largest=array[0];
    second=array[1];
}
else
{
    largest=array[1];
    second=array[0];
}
for(i=2;i<10;i++)
{
if(largest<array[i])
{
    second=largest;
    largest=array[i];
}
    else if(second<array[i])
    {
        second=array[i];
    }
}
    printf("largest=%d\nsecond=%d",largest,second);
    return 0;
}

