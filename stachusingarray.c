#include<stdio.h>
#include <stdlib.h>
int stack[100],top=-1;
void push(int data,int n);
int pop();
void display();
int main(){
    int n,data,ch;
    printf("Enter size of stack: ");
    scanf("%d",&n);
    printf("\nImplementation of Stack using Linked List\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    while (1) {
        
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
           { printf("\nEnter value to be inserted: ");
            scanf("%d",&data);
            push(data,n);
            break;}
        case 2:
            printf("\nPopped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
    



void push( int data, int n)
{
if ( top >= n-1)
  printf("overflow");
else
{
 top++;
 stack[top] = data;
}
}

int pop()
{
if (top<= -1)
{
printf("underflow condition");
}

else
{
return stack[top--];
}
}

void display()
{
    if(top==-1) {
        printf("Stack is empty");
}
     
   else{
     printf("Stack elements are:");
      for(int i=top; i>=0; i--)
      printf("%d " ,stack[i]);
      printf("\n");
   }
}  