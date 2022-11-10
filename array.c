#include<stdio.h>
void main()
 { int a[5];
  printf("Enter array elements:");
  for(int i=0;i<5;i++)
  {scanf("%d",&a[i]);}
  printf("Array elements:\n");
  for(int i=0;i<5;i++)
  {printf("%d\t",a[i]);}
   printf("\n");
}
