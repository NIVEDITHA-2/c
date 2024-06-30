#include<stdio.h>
#define MAX 50
 int a[MAX],i,front=-1,rear=-1,ele;
 void enqueue();
 void display();
 void dequeue();
void main()
{
    int ch=0;
  while(ch!=4)
  {
   printf("\n1.Enter 2.Display 3.Delete 4.exit \nEnter the choice : ");
   scanf("%d",&ch); 
   switch(ch)
   {
    case 1:
            enqueue();break;
     case 2:
            display();break;
     case 3:
            dequeue();break;
     case 4:
            exit(1);
    default:
           printf("Invalid choice\n");

   }
  }
}
void enqueue()
{
    if(rear==MAX-1)
    {
        printf("overflow");
    }
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the element to queue:");
        scanf("%d",&ele); 
        rear++;
        a[rear]=ele;
    }
}
void display()
{

    if(front==-1 || front>rear)
        printf("\nunderflow");
    else
    { 
        printf("\nThe elements in stack:");
         for(i=front;i<=rear;i++)
         {
             printf("%d ",a[i]);
         }
         printf("\n");
    }
}
void dequeue()
    {
        if(front==-1 || front>rear)
            printf("underflow\n");
        else
        { 
              printf("the deleted element %d is \n",a[front]);
              ele=a[front];
              front++;
        }
    }
