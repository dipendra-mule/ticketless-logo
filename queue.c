#include <stdio.h>
#include <stdlib.h>

int queue[10], i, size, item;
int f =-1, r = -1;
// void enq()
void enq()
{
if(r==size-1 && f == 0)
{
    printf("Queue is full");
}
else
{
    if(f==-1)
    {
        f++;
    }
    if(r == size-1 && f != 0) 
    {
        r == 0;
    }
    else
    {
        r++;
        
    }
    scanf("%d",&item);
    queue[r]=item;
}
}
void deq()
{
  
    if(f==-1)
    {
       printf("Queue is empty"); 
    }
    else
    
    {
          
        item=queue[f];
        if(f==r)
        {
            
            f=r=-1;
        }
        else
        {
         
            f++;
        }
    }
}
void display()
{
    if(f==-1)
    {
       printf("Queue is empty"); 
    }
   else
   {
        for (i=f;i<=r;i++)
        {
            printf("Queue[%d] = %d\n`",i,queue[i]);
        }
}
}
// void deq
// void display()

void main ()
{
    int ch ;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    while(1)
    {
        printf("\nChose one from the below options...\n");
        printf("\n1.Enq 2.Deq 3.Display 4.Exit");
        printf("\n Enter choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("Enq..\n");
                enq();
                break;
            }
            case 2:
            {
                printf("Dnq..\n");
                deq();
                break;
            }
            case 3:
            {
                printf("display...\n");
                display();
                break;
            }
            case 4:
            {
                printf("Exiting....\n");
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
