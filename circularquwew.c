


#include <stdio.h>
#include <stdlib.h>

int cqueue[10], i, size, item;
int front = -1, rear = -1;

void cenq()
{
if((rear == size-1 && front == 0) || front == rear + 1)
{
    printf("Overflow.....♥");
}
else
{
    if(front==-1)
    {
        front++;
    }
    if(rear == size-1 && front != 0) 
    {
        rear == 0;
    }
    else
    {
        rear++;
        
    }
    scanf("%d",&item);
    cqueue[rear]=item;
    
}
}
void cdeq()
{
  
    if(front==-1)
    {
       printf("Underflow....♣"); 
    }
    else
    {
        item=cqueue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if (front = size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
}
void display()
{
    if(front==-1)
    {
       printf("Underflow....♣"); 
    }
  else
  {
        for (i=front; i != rear; i=(i+1)%size)
        {
            printf("Queue[%d] = %d\n`",i,cqueue[i]);
        }
    }
}


void main ()
{
    int ch ;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\nChose one from the below options...\n");
        printf("\n1.Enq\n2.Deq\n3.Display\n4.Exit");
        printf("\n Enter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enq");
                cenq();
                break;
            }
            case 2:
            {
                printf("Dnq");
                cdeq();
                break;
            }
            case 3:
            {
                printf("display");
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....");
                exit(0);
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
        }
    }
}
