#include<stdio.h>
int main()
{
  int x=20,y=30;
  printf("before swapping x=%d and y=%d",x,y);
  x=x+y-(y=x);
  printf("after swapping x=%d and y=%d",x,y);
  return 0;
}