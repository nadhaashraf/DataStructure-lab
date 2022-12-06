#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*newnode,*temp,*tail;


void delfrombeg(){
    if(head==NULL){
        printf("Empty Linked list.");
    }
    else{
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
    }

}



void delfromend()
{
  if(head==NULL)
        {printf("Empty Linked list.");}
  else{
    temp=tail;
    tail->prev->next=NULL;
    tail=tail->prev;
    tail->next=NULL;
    free(temp);
  }
}

void delfrompos(){
    int pos,i=1;
    temp=head;
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
     temp->next->prev=temp->prev;
    free(temp);
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
        tail=newnode;
    }printf("Do you want to continue?(1/0) ");
    scanf("%d",&choice);
    }
    printf("%d",&tail->data);
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
   

    printf("\nMenu\n1.Delete from Beginning\n2.Delete from End\n3.Delete from given Position\n4.Display\n5.Exit\n");
do{
printf("\nEnter your choice:");
scanf("%d",&ch2);
switch (ch2)
{
case  1:
     delfrombeg();
    break;
case  2:
     delfromend();
    break;
case  3:
     delfrompos();
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
