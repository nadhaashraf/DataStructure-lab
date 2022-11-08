#include <stdio.h> 
#include<conio.h>
void main()
{
   int n1,n2,i;            //Array Size Declaration
    int a[10000], b[10000];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(int i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
    
    

    printf("\nArrays before swapping:\n");
    printf("\nArray 1:  ");
    for(i=0;i<n1;i++)
    {printf("%d  ",a[i]);}

     printf("\nArray 2:  ");
    for(i=0;i<n2;i++)
    {printf("%d  ",b[i]);}

    if(n1==n2)
    {
        for(i=0;i<n1;i++)
     { a[i]=a[i]+b[i];
      b[i]=a[i]-b[i];
      a[i]=a[i]-b[i];
     }

 printf("\nArrays after swapping:\n");
    printf("\nArray 1:  ");
    for(i=0;i<n1;i++)
    {printf("%d  ",a[i]);}

     printf("\nArray 2:  ");
    for(i=0;i<n2;i++)
    {printf("%d  ",b[i]);}
     
    }
    else{
        printf("Cannot be swapped.");
            }
}