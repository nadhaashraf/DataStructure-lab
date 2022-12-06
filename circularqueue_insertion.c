#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *next;
}*front=0,*rear=0;


void enq(int data);
void deq();
void display();

int count = 0;



int main()
{
   int data, ch;
   printf("\nImplementation of Queue using Linked List\n");
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
                        printf("Enter data : ");
                        scanf("%d", &data);
                        enq(data);
                        break;
         case 2:
                         deq();
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

void enq(int data){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
   if (rear == NULL){
      front = rear= newnode;
      rear->next= front;
   }else{
      rear->next=newnode;
      rear=newnode;
      rear->next=front;
   }
   
}


void display(){
   struct node *temp;
   temp=front;
   if(front==NULL && rear==NULL)
   {printf("Queue Empty");}
   else{
    while(temp->next!=front)
    {printf("%d",temp->data);
    temp=temp->next;
   }
   printf("%d",temp->data);
   }}



   void deq(){
      struct node *temp;
      temp=front;
      if(front==0 && rear==0)
      {printf("Underflow");}
      else if(front==rear){
        front=rear=NULL;
        free(temp);
      }
      else{
        front=front->next;
        rear->next=front;
        free(temp);
      }
}

