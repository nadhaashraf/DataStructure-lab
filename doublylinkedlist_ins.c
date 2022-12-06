#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*newnode,*temp;


void insertatbeg(){
    
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted:");
    scanf("%d", &newnode->data);
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
    
}

void insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted:");
    scanf("%d", &newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {temp=temp->next;}
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;

}


void insertatpos()
{int pos,i=1;
temp=head;
 printf("\nEnter position:");
  scanf("%d",&pos);
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted:");
    scanf("%d", &newnode->data);

 while(i<pos-1)
        {temp=temp->next;
        i++;
        }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;
 }



void create(){
    int choice=1;
    while(choice)
    {newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=temp->next;
    }printf("Do you want to continue?(1/0) ");
    scanf("%d",&choice);
    }
}


void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{   int ch2;
    create();
    printf("\nOriginal Linked List: \n");

    display();
   

    printf("\nMenu\n1.Insert at Beginning\n2.Insert at End\n3.Insert at given Position\n4.Display\n5.Exit\n");
do{
printf("\nEnter your choice:");
scanf("%d",&ch2);
switch (ch2)
{
case  1:
     insertatbeg();
    break;
case  2:
     insertatend();
    break;
case  3:
     insertatpos();
    break;
case  4:
     display();
    break;
case  5:
     
    break;

}
}while(ch2!=5);
exit(0);
getch();
}


