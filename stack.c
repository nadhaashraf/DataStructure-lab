#include<stdio.h>
int stack[100], top=-1,n;
void push();
void pop();
void display();

main()
{int ch;
printf("\nEnter the number of elements in the Stack:");
scanf("%d",&n);
 printf("Menu:\n1.Push\n2.Pop\n3.Display\n4.Exit");
 do{
printf("\nEnter the operation:");
 scanf("%d",&ch);
 switch(ch)
 { case 1 :{ push();
             break;
            }  
case 2 :  { pop();
             break;
            }  
case 3 :  { display();
             break;
            } 
case 4 :  {printf("\nExit");
           break;
            } 
}
}while(ch!=4);
return 0;
}
void push()
{ int val;
  
  if(top>=n-1){
             printf("\nStack Overflow");
  }

  else{
	   printf("\nEnter value to be pushed:");
	   scanf("%d",&val);
	   top++;
	   stack[top]=val;
	   }
}

void pop()
{
if(top<=-1)
printf("\nStack Underflow\n");
else {
printf("\nThe popped element is: %d\n",stack[top]);
top--;
}

}

void display()
{
if(top>=0){
printf("\nStack elements are:");
for(int i=top; i>=0;i--)
printf("%d ",stack[i]);
printf("\n");
}
else
printf("\nStack is Empty.");

}
