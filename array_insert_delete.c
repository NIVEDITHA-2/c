#include<stdio.h>
#define max[100]
int n,a[20],i;
void main()
{
 create();
 display();
 insert();
 printf("after insertion");
 display();
 delete();
 printf("after deletion");
 display();
}
void create()
{
    printf("enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display()
{
printf("\nthe elements are:");
for(i=0;i<n;i++)
{
 printf("\n%d",a[i]);   
}
}
void insert()
{
int pos,val;
printf("\nenter the position to be inserted:");
scanf("%d",&pos);
pos=pos-1;
printf("enter a value:");
scanf("\n%d",&val);
for(i=n-1;i>=pos;i--)
{
    a[i+1]=a[i];
}
a[pos]=val;
n=n+1;
}
void delete()
{
int pos;
printf("\nenter the position to be deleted:");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{
    a[i]=a[i+1];
}
n=n-1;
}


