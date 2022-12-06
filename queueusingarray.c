#include<stdio.h>
#include <stdlib.h>
int queue[100],rear=-1,front=-1;
void enqueue(n){
    int data;
    if(rear>=n-1)
    printf("\nOverflow");
    else{
    printf("\nEnter data to be added: ");
    scanf("%d",&data);
    if(front==-1 && rear==-1){

        front= front+1;
        rear= rear+1;
        queue[front]=data;
    }
    else{
    rear++;
    queue[rear]=data;
    }
}
}

void dequeue()
{
    if(front==-1 && rear==-1)
    printf("Underflow");
    else{
        printf("Dequeued element is: %d",queue[front]);
        front++ ;
    }
}

void display(){
  if(front==-1 && rear==-1)
  printf("Queue is empty");
  else{
    printf("\nQueue is:\n");
    for(int i=front; i<=rear; i++)
    {
        printf("%d->",queue[i]);
    }
  }   
}

int main()
{int ch,n;
   printf("Enter size of queue: ");
    scanf("%d",&n);
    printf("\nImplementation of Queue using Array\n");
   printf("----------------------------------------------\n");
   printf("\n1.Enqueue");
   printf("\n2.Dequeue");
   printf("\n3.Display");
   printf("\n4.Exit");
  
   
   while (1){
      printf("\nEnter choice : ");
      scanf("%d", &ch);

      switch (ch){
         case 1:
                        
                        enqueue(n);
                        break;
         case 2:
                         dequeue();
                        break;

         case 3:
                        display();
                        break;

         case 4:
                         exit(0);
                        break;

         

         default:
                        printf("Wrong choice, Try again ");
                        break;
      }
}
}